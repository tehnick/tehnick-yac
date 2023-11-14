#include <algorithm>
#include <cstdint>
#include <iomanip>
#include <iostream>
#include <map>
#include <ranges>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#define DEBUG_MODE 0

using namespace std;

static const string STRING_ADD              = "ADD";
static const string STRING_BUY              = "BUY";
static const string STRING_DELETE           = "DELETE";
static const string STRING_DELETED          = "DELETED";
static const string STRING_GET              = "GET";
static const string STRING_NOT_FOUND        = "NOT FOUND";
static const string STRING_SELL             = "SELL";
static const string STRING_SHOW_OPERATIONS  = "SHOW_OPERATIONS";

int64_t g_counter_of_operations = 0;
map<uint64_t, map<int64_t, int64_t> > g_depth_of_market = {}; // price => (unique identifier => volume)
unordered_map<int64_t, uint64_t> g_orders = {}; // unique identifier => price
vector<string> g_order_flow = {}; // finished transactions

inline void process_the_order(const string &order_type, const double &real_price, int64_t &volume)
{
    const bool sell = (order_type == STRING_SELL); // order type
    const auto price = static_cast<uint64_t>(real_price * 100.);
    const auto uid = (++g_counter_of_operations);
    g_orders[uid] = price;

    auto buy_uid = uid, sell_uid = uid;
    auto transaction_price = price;
    auto transaction_volume = volume;

    auto save_transaction = [&]() {
        const double transaction_real_price = transaction_price / 100.;

        std::stringstream ss;
        string line;
        ss << fixed;
        ss << setprecision(2);

        // buy_uid sell_uid real_price volume
        ss << buy_uid << ' ';
        ss << sell_uid << ' ';
        ss << transaction_real_price << ' ';
        ss << transaction_volume;

        getline(ss, line);
        g_order_flow.push_back(line);
    };

    if (sell) { // SELL
        vector<uint64_t> prices;
        for (auto& [key, value] : g_depth_of_market) {
            if (key < price)
                continue;

            bool counterparty = (value.begin()->second < 0); // there is a buyer
            if (!counterparty)
                continue;

            prices.push_back(key);
        }

        for (const auto &p : prices) {
            if (volume <= 0)
                break;

            auto &bucket = g_depth_of_market[p];
            vector<int64_t> orders;
            for (auto& [key, value] : bucket) {
                orders.push_back(key);
            }

            for (const auto &o : orders) {
                buy_uid = o;
                auto buy_volume = -bucket[o];

                transaction_price = p;

                if (buy_volume > volume) {
                    transaction_volume = volume;
                    save_transaction();

                    bucket[buy_uid] += volume;

                    volume = 0;
                    break;
                }
                else if (buy_volume <= volume) {
                    transaction_volume = buy_volume;
                    save_transaction();

                    g_orders.erase(o);
                    bucket.erase(o);
                    if (bucket.empty()) {
                        g_depth_of_market.erase(p);
                    }

                    volume -= buy_volume;
                    if (volume == 0)
                        break;
                }
            }
        }
    }
    else { // BUY
        vector<uint64_t> prices;
        for (auto& [key, value] : g_depth_of_market) {
            if (key > price)
                continue;

            bool counterparty = (value.begin()->second > 0); // there is a seller
            if (!counterparty)
                continue;

            prices.push_back(key);
        }
        std::reverse(begin(prices), end(prices));

        for (const auto &p : prices) {
            if (volume <= 0)
                break;

            auto &bucket = g_depth_of_market[p];
            vector<int64_t> orders;
            for (auto& [key, value] : bucket) {
                orders.push_back(key);
            }

            for (const auto &o : orders) {
                sell_uid = o;
                auto sell_volume = bucket[o];

                transaction_price = p;

                if (sell_volume > volume) {
                    transaction_volume = volume;
                    save_transaction();

                    bucket[sell_uid] -= volume;

                    volume = 0;
                    break;
                }
                else if (sell_volume <= volume) {
                    transaction_volume = sell_volume;
                    save_transaction();

                    g_orders.erase(o);
                    bucket.erase(o);
                    if (bucket.empty()) {
                        g_depth_of_market.erase(p);
                    }

                    volume -= sell_volume;
                    if (volume == 0)
                        break;
                }
            }
        }
    }

    if (volume == 0) {
        g_orders.erase(uid);
    }
    else {
        auto &bucket = g_depth_of_market[price];
        bucket[uid] = (sell ? volume : -volume);
    }

    cout << uid << endl;
}

inline void get_depth_of_market()
{
    int64_t uid = 0;
    bool sell = true; // order type: SELL or BUY
    uint64_t price = 0;
    double real_price = 0;
    int64_t volume = 0;

    auto prepare_and_print_line = [&]() {
        std::stringstream ss;
        string line;
        ss << fixed;
        ss << setprecision(2);

        // uid order_type real_price volume
        ss << uid << ' ';
        ss << (sell ? STRING_SELL : STRING_BUY) << ' '; // order type
        ss << real_price << ' ';
        ss << volume;

        getline(ss, line);
        cout << line << "\n";
    };

    for (auto iter = rbegin(g_depth_of_market); iter != rend(g_depth_of_market); ++iter) {
        auto &bucket = iter->second;
        if (bucket.empty())
            continue;

        price = iter->first;
        real_price = price / 100.;

        sell = (bucket.begin()->second > 0); // order type
        if (sell) { // SELL
            for (auto it2 = rbegin(bucket); it2 != rend(bucket); ++it2) {
                uid = it2->first;
                volume = it2->second;
                prepare_and_print_line();
            }
        }
        else { // BUY
            for (auto it2 = begin(bucket); it2 != end(bucket); ++it2) {
                uid = it2->first;
                volume = -it2->second;
                prepare_and_print_line();
            }
        }
    }
    cout.flush();
}

inline void cancel_the_order(const int64_t &uid)
{
    if (!g_orders.contains(uid)) {
        cout << STRING_NOT_FOUND << endl;
        return;
    }

    auto price = g_orders[uid];
    g_orders.erase(uid);

    auto &bucket = g_depth_of_market[price];
    if (!bucket.contains(uid)) {
        cout << STRING_NOT_FOUND << endl;
        return;
    }

    bucket.erase(uid);
    if (bucket.empty()) {
        g_depth_of_market.erase(price);
    }
    cout << STRING_DELETED << endl;
}

inline void show_transactions(size_t amount)
{
    if (amount > g_order_flow.size())
        amount = g_order_flow.size();

    for (auto k = g_order_flow.size() - amount; k < g_order_flow.size(); ++k) {
        cout << g_order_flow[k] << "\n";
    }
    cout.flush();
}

inline void execute_command(const string &in)
{
    std::stringstream ss;
    ss << in;

    string command;
    ss >> command;

    if (command == STRING_ADD) {
        string order_type;
        ss >> order_type;

        double real_price = 0;
        ss >> real_price;
        if (real_price < 0)
            return;

        int64_t volume = 0;
        ss >> volume;
        if (volume <= 0)
            return;

        process_the_order(order_type, real_price, volume);
    }
    else if (command == STRING_GET) {
        get_depth_of_market();
    }
    else if (command == STRING_DELETE) {
        int64_t uid = 0;
        ss >> uid;
        if (uid < 1)
            return;

        cancel_the_order(uid);
    }
    else if (command == STRING_SHOW_OPERATIONS) {
        int64_t amount = 0;
        ss >> amount;
        if (amount < 1)
            return;

        show_transactions(amount);
    }
}

#if DEBUG_MODE
inline void test1()
{
    // in:
    //    6
    //    ADD BUY 1000.00 5
    //    ADD SELL 1100.00 3
    //    GET
    //    ADD SELL 1000.00 5
    //    GET
    //    SHOW_OPERATIONS 2
    // out:
    //    1
    //    2
    //    2 SELL 1100.00 3
    //    1 BUY 1000.00 5
    //    3
    //    2 SELL 1100.00 3
    //    1 3 1000.00 5

    execute_command("ADD BUY 1000.00 5");
    execute_command("ADD SELL 1100.00 3");
    execute_command("GET");
    execute_command("ADD SELL 1000.00 5");
    execute_command("GET");
    execute_command("SHOW_OPERATIONS 2");

    cout << endl;
    cout << "Correct answer:" << endl;
    cout << "1" << endl;
    cout << "2" << endl;
    cout << "2 SELL 1100.00 3" << endl;
    cout << "1 BUY 1000.00 5" << endl;
    cout << "3" << endl;
    cout << "2 SELL 1100.00 3" << endl;
    cout << "1 3 1000.00 5" << endl;
}

inline void test2()
{
    // in:
    //    ADD BUY 100.00 5
    // out:
    //    1
    execute_command("ADD BUY 100.00 5");

    cout << endl;
    cout << "Correct answer:" << endl;
    cout << "1" << endl;
}

inline void test3()
{
    execute_command("ADD BUY 10.00 1");
    execute_command("ADD SELL 11.00 1");
    execute_command("ADD BUY 10.00 2");
    execute_command("ADD SELL 13.00 3");
    execute_command("ADD SELL 17.00 3");
    execute_command("ADD SELL 11.00 2");
    execute_command("ADD BUY 6.00 3");
    execute_command("ADD BUY 9.00 3");
    execute_command("GET");

    cout << endl;
    cout << "Correct answer:" << endl;
    cout << "1" << endl;
    cout << "2" << endl;
    cout << "3" << endl;
    cout << "4" << endl;
    cout << "5" << endl;
    cout << "6" << endl;
    cout << "7" << endl;
    cout << "8" << endl;
    cout << "5 SELL 17.00 3" << endl;
    cout << "4 SELL 13.00 3" << endl;
    cout << "6 SELL 11.00 2" << endl;
    cout << "2 SELL 11.00 1" << endl;
    cout << "1 BUY 10.00 1" << endl;
    cout << "3 BUY 10.00 2" << endl;
    cout << "8 BUY 9.00 3" << endl;
    cout << "7 BUY 6.00 3" << endl;
}

inline void test4()
{
    execute_command("ADD BUY 1000.00 5");
    execute_command("ADD SELL 1100.00 3");
    cout << "--" << endl;
    execute_command("GET");
    cout << "--" << endl;
    execute_command("ADD SELL 1000.00 1");
    execute_command("ADD SELL 990.00 15");
    cout << "--" << endl;
    execute_command("GET");
    cout << "--" << endl;
    execute_command("ADD SELL 1000.00 2");
    execute_command("ADD BUY 1000.00 8");
    execute_command("ADD SELL 1100.00 4");
    cout << "--" << endl;
    execute_command("GET");
    cout << "--" << endl;
    execute_command("SHOW_OPERATIONS 45");
    cout << "--" << endl;
    execute_command("DELETE 1");
    execute_command("DELETE 1");
    execute_command("DELETE 1");
    execute_command("DELETE 2");
    cout << "--" << endl;
    execute_command("GET");
    cout << "--" << endl;

    cout << endl;
}
#endif // DEBUG_MODE

int main()
{
#if DEBUG_MODE
    test1();
    // test2();
    // test3();
    // test4();
    return 0;
#endif

    int64_t n = 0;
    cin >> n;
    if (n < 1)
        return 0;

    string buf;
    for (int64_t k = 0; k <= n && !cin.eof(); ++k) {
        getline(cin, buf);

        while (!buf.empty() && (buf.back() == '\r' || buf.back() == '\n' || buf.back() == ' '))
            buf.resize(buf.size()-1);

        if (buf.size() >= 3)
            execute_command(buf);
    }

    cout.flush();
    return 0;
}
