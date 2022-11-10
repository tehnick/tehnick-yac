#include <algorithm>
#include <cctype>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

#define DEBUG_MODE 0

using namespace std;

vector<unordered_set<int>> g_network; // data center => disabled servers
vector<uint32_t> g_counters; // counters of restarts of data centers
int g_servers_number = 0; // number of servers in each data center
bool g_min_changed = true;
bool g_max_changed = true;
int g_cache_min = 0;
int g_cache_max = 0;

inline void prepare_global_variables(const int n, const int m)
{
    g_counters = vector<uint32_t>(n, 0);
    g_network = vector<unordered_set<int>>(n, unordered_set<int>());
    g_servers_number = m;
    g_min_changed = true;
    g_max_changed = true;
}

inline void reset_data_center(const int data_center_num)
{
    g_network[data_center_num-1].clear();
    ++g_counters[data_center_num-1];
    g_min_changed = true;
    g_max_changed = true;
}

inline void disable_server(const int data_center_num, const int server_num)
{
    if (g_network[data_center_num-1].find(server_num-1) != g_network[data_center_num-1].end())
        return;

    g_network[data_center_num-1].insert(server_num-1);
    g_min_changed = true;
    g_max_changed = true;
}

inline int working_servers(const int idx)
{
    return g_servers_number - g_network[idx].size();
}

inline int get_min()
{
    if (!g_min_changed)
        return g_cache_min;

    int out = 0;
    uint32_t min_val = 0;
    --min_val;
    for (int i = 0; i < g_network.size(); ++i) {
        if (g_counters[i] == 0) {
            out = i;
            break;
        }
        uint32_t prod = g_counters[i] * working_servers(i);
        if (prod == 0) {
            out = i;
            break;
        }
        if (prod < min_val) {
            min_val = prod;
            out = i;
        }
    }

    g_cache_min = out+1;
    g_min_changed = false;
    return g_cache_min;
}

inline int get_max()
{
    if (!g_max_changed)
        return g_cache_max;

    int out = 0;
    uint32_t max_val = 0;
    for (int i = 0; i < g_network.size(); ++i) {
        if (g_counters[i] == 0) {
            continue;
        }
        uint32_t prod = g_counters[i] * working_servers(i);
        if (prod > max_val) {
            max_val = prod;
            out = i;
        }
    }

    g_cache_max = out+1;
    g_max_changed = false;
    return g_cache_max;
}

#if DEBUG_MODE
inline void test1()
{
    // in:
    //    3 3 12
    //    DISABLE 1 2
    //    DISABLE 2 1
    //    DISABLE 3 3
    //    GETMAX
    //    RESET 1
    //    RESET 2
    //    DISABLE 1 2
    //    DISABLE 1 3
    //    DISABLE 2 2
    //    GETMAX
    //    RESET 3
    //    GETMIN
    // out:
    //    1
    //    2
    //    1

    const int n = 3, m = 3;
    prepare_global_variables(n, m);

    cout << "Answer:" << endl;
    disable_server(1, 2);
    disable_server(2, 1);
    disable_server(3, 3);
    cout << get_max() << endl;
    reset_data_center(1);
    reset_data_center(2);
    disable_server(1, 2);
    disable_server(1, 3);
    disable_server(2, 2);
    cout << get_max() << endl;
    reset_data_center(3);
    cout << get_min() << endl;

    cout << "Correct answer:" << endl;
    cout << "1\n2\n1" << endl;
}

inline void test2()
{
    // in:
    //    2 3 9
    //    DISABLE 1 1
    //    DISABLE 2 2
    //    RESET 2
    //    DISABLE 2 1
    //    DISABLE 2 3
    //    RESET 1
    //    GETMAX
    //    DISABLE 2 1
    //    GETMIN
    // out:
    //    1
    //    2

    const int n = 2, m = 3;
    prepare_global_variables(n, m);

    cout << "Answer:" << endl;
    disable_server(1, 1);
    disable_server(2, 2);
    reset_data_center(2);
    disable_server(2, 1);
    disable_server(2, 3);
    reset_data_center(1);
    cout << get_max() << endl;
    disable_server(2, 1);
    cout << get_min() << endl;

    cout << "Correct answer:" << endl;
    cout << "1\n2" << endl;
}
#endif // DEBUG_MODE

int main()
{
#if DEBUG_MODE
    // test1();
    test2();
    return 0;
#endif

    string buf;

    uint32_t n = 0, m = 0, q = 0;
    cin >> n;
    cin >> m;
    cin >> q;

    if (n < 1 || m < 1)
        return 1;

    prepare_global_variables(n, m);

    auto start = std::chrono::steady_clock::now();
    vector<uint32_t> debug_times(4, 0);

    int i = 0, j = 0;
    for (int k = 0; k < q; ++k) {
        cin >> buf;

        const char command = buf[4];
        if (command == 'T') { // RESET
            cin >> i;
            reset_data_center(i);
            ++debug_times[0];
        }
        else if (command == 'B') { // DISABLE
            cin >> i;
            cin >> j;
            disable_server(i, j);
            ++debug_times[1];
        }
        else if (command == 'A') { // GETMAX
            cout << get_max() << endl;
            ++debug_times[2];
        }
        else if (command == 'I') { // GETMIN
            cout << get_min() << endl;
            ++debug_times[3];
        }

        // Отладка этого ср*ного г*вна с помощью кодов ошибок...
        auto elapsed = std::chrono::steady_clock::now();
        std::chrono::duration<double> elapsed_seconds = elapsed-start;
        if (elapsed_seconds.count() > 1.98) {
            const auto max_val = max({ debug_times[0], debug_times[1], debug_times[2], debug_times[3] });
            if (max_val == debug_times[1]) { // DISABLE
                return 2; // Run-time error
            }
            else if (max_val == debug_times[0]) { // RESET
                cout << "RESET wins!" << endl; // Presentation error
                return 0;
            }
            else if (max_val == debug_times[2]) { // GETMAX
                return 0; // Wrong answer
            }
        }
    }

    return 0;
}
