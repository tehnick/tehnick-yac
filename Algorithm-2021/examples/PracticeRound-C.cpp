#include <iostream>
#include <algorithm>
#include <set>
#include <string>
using namespace std;


pair<string, string> split(string &s) {
    string a, b;
    for (int i = 0; i < s.size(); i += 2) {
        a += s[i];
        if (i + 1 < s.size())
            b += s[i + 1];
    }
    return { a, b };
}

bool consistsOfSingleLetter(string &s) {
    for (int i = 1; i < s.size(); i++)
        if (s[i] != s[0])
            return 0;
    return 1;
}

void complete(string &s, set<char> &usedLetters) {
    char letter = 'A';
    for (char &c : s) {
        if (c == '?') {
            while (usedLetters.count(letter))
                letter++;
            c = letter++;
        }
    }
}


int main() {
    string cypher;
    cin >> cypher;

    set<char> usedLetters;
    string answer(26, '?');
    int answerPos;

    string s = cypher;
    for (int p = 0; p < 26; p++) {        
        auto [a, b] = split(s);

        if (!consistsOfSingleLetter(a))
            swap(a, b);

        if (!consistsOfSingleLetter(a) || usedLetters.count(a[0])) {
            cout << "No solution";
            return 0;
        }

        answer[p] = a[0];
        usedLetters.insert(a[0]);

        s = b;

        if (s.empty()) {
            answerPos = (1 << p) - cypher.find(a[0]);
            break;
        }
    }

    complete(answer, usedLetters);

    cout << answer << "\n" << answerPos;
}
