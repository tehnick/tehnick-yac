#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#define DEBUG_MODE 0

using namespace std;

struct FileInfo {
    string absolute_file_path;
    string dir;
    string ext;
    bool valid = true;
};

unordered_set<string> g_black_list;
vector<FileInfo> g_files;

inline bool is_valid_dir(const string& in)
{
    if (in.front() != '/')
        return false;
    if (in.back() != '/')
        return false;

    char prev = 0;
    for (const auto &c : in) {
        if (c == '/') {
            if (prev == '/')
                return false;
            else
                prev = c;
        }
        else if (c == '_' || isdigit(c)) {
            prev = c;
        }
        else if (c >= 'a' && c <= 'z') {
            prev = c;
        }
        else {
            return false;
        }
    }
    return true;
}

inline FileInfo to_file_info(const string& in)
{
    FileInfo out;

    if (in.size() < 2 || in.front() != '/' || in.back() == '/' || in.back() == '.') {
        out.valid = false;
        return out;
    }

    out.absolute_file_path = in;
    out.dir = in;

    for (int i = in.size()-2; i >= 0; --i) {
        if (in[i] == '.') {
            if (out.ext.empty()) {
                out.ext = in.substr(i);
            }
            else {
                out.valid = false;
                return out;
            }
        }
        else if (in[i] == '/') {
            out.dir.resize(i+1);
            break;
        }
    }

    if (out.ext.size() < 2 || out.ext.size() > 4 || !is_valid_dir(out.dir))
        out.valid = false;

    return out;
}

bool is_subdir(const string& dir, const string& subdir)
{
    if (subdir.rfind(dir, 0) == 0) {
        return true;
    }
    return false;
}

inline string find_answer(const string& in)
{
    unordered_map<string, int> counter;
    for (const auto &black_dir : g_black_list) {
        if (!is_subdir(in, black_dir))
            continue;

        for (const auto &f : g_files) {
            if (is_subdir(black_dir, f.dir))
                ++counter[f.ext];
        }
    }

    string out = to_string(counter.size());
    for (const auto& [key, value] : counter) {
        out += "\n" + key + ": " + to_string(value);
    }
    return out;
}

#if DEBUG_MODE
inline void test1()
{
    // in:
    //    2
    //    /project/internal/
    //    /project/docs/
    //    5
    //    /project/docs/internal.md
    //    /project/lib/header.cpp
    //    /project/lib/header.h
    //    /project/bin/main.cpp
    //    /project/internal/secret.h
    //    3
    //    /
    //    /project/internal/
    //    /project/lib/
    // out:
    //    2
    //    .md: 1
    //    .h: 1
    //    1
    //    .h: 1
    //    0

    g_black_list.insert("/project/internal/");
    g_black_list.insert("/project/docs/");

    g_files.push_back(to_file_info("/project/docs/internal.md"));
    g_files.push_back(to_file_info("/project/lib/header.cpp"));
    g_files.push_back(to_file_info("/project/lib/header.h"));
    g_files.push_back(to_file_info("/project/bin/main.cpp"));
    g_files.push_back(to_file_info("/project/internal/secret.h"));

    cout << "Answer:" << endl;
    cout << find_answer("/") << endl;
    cout << find_answer("/project/internal/") << endl;
    cout << find_answer("/project/lib/") << endl;
    cout << "Correct answer:\n"
         << "2\n"
            ".md: 1\n"
            ".h: 1\n"
            "1\n"
            ".h: 1\n"
            "0\n"
         << endl;
}

inline void test2()
{
    // in:
    //    2
    //    /lib/folder_1/
    //    /lib/folder_2/folder_3/
    //    7
    //    /lib/a.cpp
    //    /lib/folder_2/b.cpp
    //    /lib/folder_1/c.cpp
    //    /lib/folder_2/folder_4/d.cpp
    //    /lib/folder_1/folder_5/e.cpp
    //    /lib/folder_2/folder_3/folder_6/f.py
    //    /lib/folder_2/folder_3/g.cpp
    //    3
    //    /lib/
    //    /lib/folder_1/
    //    /lib/folder_2/
    // out:
    //    2
    //    .cpp: 3
    //    .py: 1
    //    1
    //    .cpp: 2
    //    2
    //    .py: 1
    //    .cpp: 1

    g_black_list.insert("/lib/folder_1/");
    g_black_list.insert("/lib/folder_2/folder_3/");

    g_files.push_back(to_file_info("/lib/a.cpp"));
    g_files.push_back(to_file_info("/lib/folder_2/b.cpp"));
    g_files.push_back(to_file_info("/lib/folder_1/c.cpp"));
    g_files.push_back(to_file_info("/lib/folder_2/folder_4/d.cpp"));
    g_files.push_back(to_file_info("/lib/folder_1/folder_5/e.cpp"));
    g_files.push_back(to_file_info("/lib/folder_2/folder_3/folder_6/f.py"));
    g_files.push_back(to_file_info("/lib/folder_2/folder_3/g.cpp"));

    cout << "Answer:" << endl;
    cout << find_answer("/lib/") << endl;
    cout << find_answer("/lib/folder_1/") << endl;
    cout << find_answer("/lib/folder_2/") << endl;
    cout << "Correct answer:\n"
         << "2\n"
            ".cpp: 3\n"
            ".py: 1\n"
            "1\n"
            ".cpp: 2\n"
            "2\n"
            ".py: 1\n"
            ".cpp: 1\n"
         << endl;
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

    int n = 0;
    cin >> n;
    if (n < 1)
        return -1;
    for (int i = 0; i < n; ++i) {
        cin >> buf;
        if (is_valid_dir(buf))
            g_black_list.insert(buf);
    }

    int m = 0;
    cin >> m;
    if (m < 1)
        return -1;
    for (int i = 0; i < m; ++i) {
        cin >> buf;
        FileInfo file_info = to_file_info(buf);
        if (file_info.valid)
            g_files.push_back(file_info);
    }

    int q = 0;
    cin >> q;
    if (q < 1)
        return -1;
    for (int i = 0; i < q; ++i) {
        cin >> buf;
        if (is_valid_dir(buf))
            cout << find_answer(buf) << endl;
    }

    return 0;
}
