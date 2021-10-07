#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
#include <cstdint>
#include <numeric>
#include <array>

using namespace std;

int calcNumberOfKeystrokes(const string &s)
{
    if (s.empty())
        return 0;

    int out = 0;
    bool caps = false;
    int capsCounter = 0;
    int spacesCounter = 0;
    for (const auto c : s) {
        if (c >= 'a' && c <= 'z') {
            if (caps) {
                caps = false;
                out += min(capsCounter*2+spacesCounter, (capsCounter+spacesCounter)+4);
            }
            spacesCounter = 0;
            ++out;
        }
        else if (c >= 'A' && c <= 'Z') {
            if (!caps) {
                caps = true;
                capsCounter = 0;
            }
            ++capsCounter;
        }
        else if (c == ' ') {
            if (caps)
                ++spacesCounter;
            else
                ++out;
        }
    }
    if (caps) {
        out += min(capsCounter*2+spacesCounter, (capsCounter+spacesCounter)+2);
    }
    return out;
}

int main()
{
    string in;
    std::getline(std::cin, in);

    const int out = calcNumberOfKeystrokes(in);
    cout << out << endl;

    return 0;
}

