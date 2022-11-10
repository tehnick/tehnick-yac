#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

#define DEBUG_MODE 1

using namespace std;

inline bool correct_division(const uint64_t a, const char b)
{
    string a_str = to_string(a);
    char rem = 0;
    for (const auto &c : a_str) {
        const char d = (c - '0');
        if (d / b)
            return false;
    }
    return (rem == 0);
}

inline uint64_t find_answer(const uint64_t ni, const char bi)
{
    if (ni < 1 || bi < 1)
        return 0;

    uint64_t out = 0;
    for (uint64_t a = 1; a <= ni; ++a) {
        if (correct_division(a, bi))
            ++out;
    }
    return out;
}

inline void test1()
{
    // in:
    //    4
    //    10 1
    //    36 3
    //    11 2
    //    1000000000000000000 7
    // out:
    //    10
    //    6
    //    4
    //    262143

    cout << "Answer:" << endl;
    cout << find_answer(10, 1) << endl;
    cout << find_answer(36, 3) << endl;
    cout << find_answer(11, 2) << endl;
    cout << find_answer(1000000000000000000, 7) << endl;

    cout << "Correct answer:" << endl;
    cout << "10\n6\n4\n262143" << endl;
}

int main()
{
#if DEBUG_MODE
    test1();
    return 0;
#endif

    uint32_t t = 0;
    uint64_t ni = 0;
    char bi = 0;

    cin >> t;
    if (t < 1)
        return 1;

    for (int k = 0; k < t; ++k) {
        cin >> ni;
        cin >> bi;
        cout << find_answer(ni, bi) << endl;
    }
    return 0;
}
