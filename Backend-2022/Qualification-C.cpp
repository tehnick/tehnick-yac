#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

#define DEBUG_MODE 0

using namespace std;

bool g_valid_input = false;
bool g_invert_operation = false;
int g_min_base = 2;
vector<vector<int>> g_nums;
vector<char> g_operations;

constexpr int g_max_base = ('Z' - 'A') + 11;

inline void clear_global_variables()
{
    g_valid_input = false;
    g_invert_operation = false;
    g_min_base = 2;
    g_nums.clear();
    g_operations.clear();
}

inline void parse_input_data(const string& in)
{
    clear_global_variables();
    if (in.size() < 3)
        return;

#if DEBUG_MODE
    cout << "Input data:\n" << in << endl;
#endif

    g_nums.push_back(vector<int>());
    for (const auto &c : in) {
        if (c == '=') {
            if (g_invert_operation) { // found '=' more than one time
                g_valid_input = false;
                return;
            }
            else {
                g_invert_operation = true;
                g_operations.push_back('-');
                g_nums.push_back(vector<int>());
            }
        }
        else if (c == '+') {
            g_operations.push_back(g_invert_operation ? '-' : '+');
            g_nums.push_back(vector<int>());
        }
        else if (c == '-') {
            g_operations.push_back(g_invert_operation ? '+' : '-');
            g_nums.push_back(vector<int>());
        }
        else if (c == ' ') {
            continue;
        }
        else {
            if (isdigit(c)) {
                const int d = (c - '0');
                g_nums.back().push_back(d);
                if (g_min_base < d+1)
                    g_min_base = d+1;
            }
            else if (c >= 'A' && c <= 'Z') {
                const int d = (c - 'A') + 10;
                g_nums.back().push_back(d);
                if (g_min_base < d+1)
                    g_min_base = d+1;
            }
            else {
                // incorrect input
                g_valid_input = false;
                return;
            }
        }
    }

    if (g_operations.size() == g_nums.size()-1) {
        g_valid_input = true;
    }
    else {
        // incorrect input
        g_valid_input = false;
    }


#if DEBUG_MODE
    cout << "Numbers:" << endl;
    for (const auto &n : g_nums) {
        for (const auto &d : n) {
            cout << d << ' ';
        }
        cout << endl;
    }

    cout << "Operations:" << endl;
    for (const auto &o : g_operations) {
        cout << o << endl;
    }

    cout << "Min base:\n" << g_min_base << endl;
#endif
}

inline int64_t to_decimal_mumeral_system(const vector<int> &num, const double base)
{
    if (num.empty())
        return 0;

    int64_t out = 0;
    for (int k = 0; k < num.size(); ++k) {
        out += num[num.size()-1-k] * int64_t(pow(base, k));
    }
    return out;
}

inline string find_answer(const string& in)
{
    parse_input_data(in);
    if (!g_valid_input || g_nums.size() < 2)
        return "-1";

#if DEBUG_MODE
    cout << "Answer:" << endl;
#endif

    int64_t sum = 0;
    for (int base = g_min_base; base <= g_max_base; ++base) {
        sum = to_decimal_mumeral_system(g_nums.front(), base);
        for (int j = 1; j < g_nums.size(); ++j) {
            if (g_operations[j-1] == '+')
                sum += to_decimal_mumeral_system(g_nums[j], base);
            else
                sum -= to_decimal_mumeral_system(g_nums[j], base);
        }
        if (sum == 0) {
            return to_string(base);
        }
    }
    return "-1";
}

#if DEBUG_MODE
inline void test1()
{
    // in: 2 + 2 = 11 - 1
    // out: 4
    cout << find_answer("2 + 2 = 11 - 1") << endl;
    cout << "Correct answer:\n" << "4" << endl;
}

inline void test2()
{
    // in: 1 = 1
    // out: 2
    cout << find_answer("1 = 1") << endl;
    cout << "Correct answer:\n" << "2" << endl;
}

inline void test3()
{
    // in: 2 = 3
    // out: -1
    cout << find_answer("2 = 3") << endl;
    cout << "Correct answer:\n" << "-1" << endl;
}

inline void test4()
{
    // in: B = A + 1
    // out: 12
    cout << find_answer("B = A + 1") << endl;
    cout << "Correct answer:\n" << "12" << endl;
}

inline void test5()
{
    cout << find_answer("BAC + 1D - F35 - 4 = 10 + C5") << endl;
    cout << "Correct answer:\n" << "-1" << endl;
}
#endif // DEBUG_MODE

int main()
{
#if DEBUG_MODE
    // test1();
    // test2();
    // test3();
    // test4();
    test5();
    return 0;
#endif

    string buf;
    while (!cin.eof()) {
        getline(cin, buf);

        while (!buf.empty() && (buf.back() == '\r' || buf.back() == '\n' || buf.back() == ' '))
            buf.resize(buf.size()-1);

        if (buf.size() >= 3)
            cout << find_answer(buf) << endl;
    }

    return 0;
}
