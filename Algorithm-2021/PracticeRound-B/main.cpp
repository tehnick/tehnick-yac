#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
#include <cstdint>
#include <numeric>
#include <array>

#define DEBUG_MODE 0

using namespace std;

string checkResult(vector<int> &a, vector<int> &b)
{
    if (a.empty() && b.empty())
        return string("YES");
    if (a.size() != b.size())
        return string("NO");

    vector<int> c = b;
    for (auto &e : c)
        e *= -1;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    for (int i = 1; i < a.size(); ++i) {
        a[i] -= a[0];
        b[i] -= b[0];
    }
    a[0] = 0;
    b[0] = 0;

    const int64_t an = a.back();
    const int64_t bn = b.back();
    const int64_t cn = c.back();

    if (!an && !bn)
        return string("YES");
    else if (an && !bn)
        return string("NO");
    else if (!an && bn)
        return string("NO");

    static const double testMult = 1e9;
    const double k_ab = double(bn)/double(an);
    const double k_ac = double(cn)/double(an);
    int sum_ab = 0;
    int sum_ac = 0;
    for (int i = 0; i < a.size() ; ++i) {
        if (int64_t((a[i]*k_ab)*testMult) == int64_t(b[i]*testMult))
            ++sum_ab;
        if (int64_t((a[i]*k_ac)*testMult) == int64_t(c[i]*testMult))
            ++sum_ac;
    }
    if (sum_ab == a.size() || sum_ac == a.size())
        return ("YES");

    return string("NO");
}

void test1()
{
    vector<int> a;
    vector<int> b;
    string out;
    cout << "-----------" << endl;

    a = {1,2}; b = {3,5}; out = "YES";
    cout << checkResult(a, b) << "\t" << out << endl;

    a = {1,2,3,3}; b = {7,7,3,5}; out = "YES";
    cout << checkResult(a, b) << "\t" << out << endl;

    a = {1,2,3}; b = {5,8,3}; out = "NO";
    cout << checkResult(a, b) << "\t" << out << endl;

    a = {1,2}; b = {0,0}; out = "NO";
    cout << checkResult(a, b) << "\t" << out << endl;

    a = {}; b = {}; out = "YES";
    cout << checkResult(a, b) << "\t" << out << endl;

    a = {1,2,3}; b = {1,2,3,4}; out = "NO";
    cout << checkResult(a, b) << "\t" << out << endl;
}

void test2()
{
    vector<int> a;
    vector<int> b;
    string out;
    cout << "-----------" << endl;

    a = {2,4,6}; b = {0,2,1}; out = "YES";
    cout << checkResult(a, b) << "\t" << out << endl;

    a = {2,4,8}; b = {2,5,11}; out = "YES";
    cout << checkResult(a, b) << "\t" << out << endl;

    a = {2,4,8}; b = {2,8,11}; out = "YES";
    cout << checkResult(a, b) << "\t" << out << endl;

    a = {1,2,2,4}; b = {1,2,4,4}; out = "NO";
    cout << checkResult(a, b) << "\t" << out << endl;
}

int main()
{
#if DEBUG_MODE
    test1();
    test2();
    return 0;
#endif

    cin.sync_with_stdio(false);
    cin.tie(nullptr);

    int testsAmount = 0;
    cin >> testsAmount;
    if (!testsAmount)
        return 0;

    vector<int> a;
    vector<int> b;

    int linesCounter = 0, aSize = 0, bSize = 0;
    for (int testNumber = 0; testNumber < testsAmount;) {
        ++linesCounter;
        if (linesCounter == 1) {
            cin >> aSize;
            a.clear();
        }
        else if (linesCounter == 2) {
            int num = 0;
            for (int k = 0; k < aSize; ++k) {
                cin >> num;
                a.push_back(num);
            }
        }
        else if (linesCounter == 3) {
            cin >> bSize;
            b.clear();
        }
        else if (linesCounter == 4) {
            int num = 0;
            for (int k = 0; k < bSize; ++k) {
                cin >> num;
                b.push_back(num);
            }
            cout << checkResult(a, b) << endl;
        }
        else {
            linesCounter = 0;
            ++testNumber;
        }
    }

    return 0;
}

