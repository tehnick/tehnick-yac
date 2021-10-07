#include <algorithm>
#include <cstring>
#include <string>
#include <iostream>
#include <vector>
#include <unordered_map>

#define DEBUG_MODE 0

using namespace std;

struct Note {
    char warehouse_id       = '0';
    char comma1             = ',';
    char date_first[10]     = {'0','0','0','0','-','0','0','-','0','0'};
    char space              = ' ';
    char date_last[10]      = {'9','9','9','9','-','9','9','-','9','9'};
    char comma2             = ',';
    char commodity_type[3]  = {'K','G','T'};
}__attribute__((packed));

string findAnswer(vector<string>& v)
{
    if (v.empty())
        return string();

    unordered_map<string,string> replaceLater;
    auto compare_notes = [&replaceLater](const string &s1, const string &s2) {
        if (s1.front() < s2.front())
            return true;
        else if (s1.front() > s2.front())
            return false;

        const Note *note1 = reinterpret_cast<const Note*>(s1.data());
        const Note *note2 = reinterpret_cast<const Note*>(s2.data());

        static const char KGT   = 'K';
        static const char COLD  = 'C';
        static const char OTHER = 'O';

        // KGT < COLD < OTHER
        if (note2->commodity_type[0] == KGT   && note1->commodity_type[0] != KGT)
            return false;
        if (note2->commodity_type[0] == COLD  && note1->commodity_type[0] == OTHER)
            return false;
        if (note2->commodity_type[0] == OTHER && note1->commodity_type[0] != OTHER)
            return true;
        if (note2->commodity_type[0] == COLD  && note1->commodity_type[0] == KGT)
            return true;

        // If there is no intersection of time intervals:
        if (strncmp(note1->date_first, note2->date_last,  10) > 0) // first1 > last2
            return false;
        if (strncmp(note1->date_last,  note2->date_first, 10) < 0) // last1  < first2
            return true;

        // If there is intersection of time intervals:
        string s3 = s1;
        Note *note3 = reinterpret_cast<Note*>(s3.data());

        if (strncmp(note1->date_first, note2->date_first, 10) < 0) // first1 < first2
            strncpy(note3->date_first, note1->date_first, 10);
        else
            strncpy(note3->date_first, note2->date_first, 10);

        if (strncmp(note1->date_last,  note2->date_last,  10) > 0) // last1  > first2
            strncpy(note3->date_last, note1->date_last, 10);
        else
            strncpy(note3->date_last, note2->date_last, 10);

        replaceLater[s1] = s3;
        replaceLater[s2] = string();

        return true;
    };

    // sort notes
    sort(begin(v), end(v), compare_notes);

    // remove extra elements
    for (auto&& [from, to] : replaceLater) {
        replace(begin(v), end(v), from, to);
    }
    (void)remove(begin(v), end(v), string());
    while (v.back() == string()) {
        v.resize(v.size()-1);
    }

    // prepare results
    string out;
    for (const string &s : v) {
        out.append(s + "\n");
    }
    return out;
}

void appendElements(vector<string>& v, const string& s)
{
    if (s.size() < 4)
        return;

    static const string nullString = "NULL";
    if (s.substr(s.size()-4) != nullString) {
        v.push_back(s);
        return;
    }

    const string subString = s.substr(0, s.size()-4);
    v.push_back(subString + "KGT");
    v.push_back(subString + "COLD");
    v.push_back(subString + "OTHER");
}

void runTests()
{
    vector<string> in;

    in.clear();
    appendElements(in, "4,2020-02-23 2020-11-01,KGT");
    appendElements(in, "4,2020-03-15 2020-07-12,COLD");
    appendElements(in, "0,2020-03-28 2021-01-31,KGT");
    appendElements(in, "5,2020-04-01 2020-08-25,OTHER");
    appendElements(in, "2,2020-11-11 2021-08-10,KGT");
    cout << findAnswer(in) << endl;

    in.clear();
    appendElements(in, "6,2020-10-18 2021-08-22,NULL");
    appendElements(in, "8,2020-01-22 2020-06-10,KGT");
    appendElements(in, "6,2020-09-03 2020-10-03,KGT");
    appendElements(in, "8,2020-09-03 2020-10-22,NULL");
    appendElements(in, "2,2020-06-13 2020-09-19,OTHER");
    appendElements(in, "2,2020-10-18 2021-08-23,NULL");
    appendElements(in, "5,2020-08-01 2021-06-03,COLD");
    appendElements(in, "7,2020-07-22 2021-05-26,KGT");
    appendElements(in, "0,2020-12-17 2021-07-02,NULL");
    cout << "=============================" << endl;
    cout << findAnswer(in) << endl;

    in.clear();
    appendElements(in, "7,2020-08-05 2020-11-20,OTHER");
    appendElements(in, "9,2020-08-30 2021-02-27,NULL");
    appendElements(in, "8,2020-11-09 2021-09-07,OTHER");
    cout << "=============================" << endl;
    cout << findAnswer(in) << endl;
}

int main()
{
#if DEBUG_MODE
    runTests();
    return 0;
#endif

    vector<string> in;
    string buf;
    while (!cin.eof()) {
        getline(cin, buf);

        while (buf.back() == '\r' || buf.back() == '\n')
            buf.resize(buf.size()-1);
        if (buf.size() < 27)
            continue;

        appendElements(in, buf);
    }

    cout << findAnswer(in) << endl;

    findAnswer(in);

    return 0;
}

