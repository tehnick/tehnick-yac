#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
#include <cstring>

#define DEBUG_MODE 0

using namespace std;

vector<char> toVector(const string &s)
{
    static const string one = "one";
    static const string zero = "zer";

    vector<char> out;
    for (int k = 0; k < s.size()-2; ++k) {
        string part = s.substr(k, 3);
        if (part == one) {
            out.push_back(1);
        }
        else if (part == zero) {
            out.push_back(0);
        }
    }
    return out;
}

char findAnswer(const string &s1, const string &s2)
{
    if (s1 == s2)
        return '=';

    auto v1 = toVector(s1);
    auto v2 = toVector(s2);

    if (v1.size() > v2.size())
        return '>';
    else if (v1.size() < v2.size())
        return '<';

    for (int k = 0; k < v1.size(); ++k) {
        if (v1[k] < v2[k])
            return '<';
        else if (v1[k] > v2[k])
            return '>';
    }
    return '=';
}

void runTests()
{
    string s1;
    string s2;
    char out = 0;

    s1 = "oneone"; s2 = "onezerozero"; out = '<';
    cout << findAnswer(s1, s2) << "\t" << out << endl;

    s1 = "zero"; s2 = "zero"; out = '=';
    cout << findAnswer(s1, s2) << "\t" << out << endl;

    s1 = "onezero"; s2 = "oneone"; out = '<';
    cout << findAnswer(s1, s2) << "\t" << out << endl;

    s1 = "oneonezerozero"; s2 = "onezeroonezero"; out = '>';
    cout << findAnswer(s1, s2) << "\t" << out << endl;

    s1 = "one"; s2 = "zero"; out = '>';
    cout << findAnswer(s1, s2) << "\t" << out << endl;

    s1 = "one"; s2 = "one"; out = '=';
    cout << findAnswer(s1, s2) << "\t" << out << endl;
}

int main()
{
#if DEBUG_MODE
    runTests();
    return 0;
#endif

    string s1;
    string s2;
    std::getline(std::cin, s1);
    std::getline(std::cin, s2);

    cout << findAnswer(s1, s2) << endl;

    return 0;
}

