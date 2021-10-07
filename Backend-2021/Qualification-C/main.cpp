#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
#include <unordered_set>

#define DEBUG_MODE 0

using namespace std;

enum class Gamer : char {
    white = 0,
    black
};

struct Position {
    int x = 0;
    int y = 0;
};

struct position_hash {
    inline size_t operator()(const Position& p) const
    {
        hash<int> int_hasher;
        return int_hasher(p.x) ^ int_hasher(p.y);
    }
};

inline bool operator==(const Position& l, const Position& r)
{
    return (l.x == r.x && l.y == r.y);
}

typedef unordered_set<Position, position_hash> PositionSet;

inline bool checkMove(const Position& p1, const Position& p2,
                      const PositionSet& own, const PositionSet& foreign)
{
    if (foreign.find(p1) == foreign.end())
        return false;
    if (foreign.find(p2) != foreign.end())
        return false;
    if (own.find(p2) != own.end())
        return false;

    return true;
}

inline bool calc(const int n, const int m, const PositionSet& own,
                 const PositionSet& foreign)
{
    for (auto p : own) {
        if (p.x-2 >= 1 && p.y-2 >= 1) {
            if (checkMove({p.x-1,p.y-1}, {p.x-2,p.y-2}, own, foreign))
                return true;
        }
        if (p.x+2 <= n && p.y-2 >= 1) {
            if (checkMove({p.x+1,p.y-1}, {p.x+2,p.y-2}, own, foreign))
                return true;
        }
        if (p.x+2 <= n && p.y+2 <= m) {
            if (checkMove({p.x+1,p.y+1}, {p.x+2,p.y+2}, own, foreign))
                return true;
        }
        if (p.x-2 >= 1 && p.y+2 <= m) {
            if (checkMove({p.x-1,p.y+1}, {p.x-2,p.y+2}, own, foreign))
                return true;
        }
    }
    return false;
}

string findAnswer(const int n, const int m, const PositionSet& white,
                  const PositionSet& black, const Gamer gamer)
{
    if (gamer == Gamer::black)
        return calc(n, m, black, white) ? string("Yes") : string("No");

    return calc(n, m, white, black) ? string("Yes") : string("No");
}

void runTests()
{
    int n = 0;
    int m = 0;
    PositionSet whiteSet;
    PositionSet blackSet;
    Gamer gamer = Gamer::white;
    string out;

    n = 8; m = 8;
    whiteSet = {{1,1},{2,6},{6,6}};
    blackSet = {{2,2},{7,7},{8,8}};
    gamer = Gamer::white; out = "Yes";
    cout << findAnswer(n, m, whiteSet, blackSet, gamer) << "\t" << out << endl;

    n = 8; m = 8;
    whiteSet = {{2,2},{3,3}};
    blackSet = {{7,7},{8,8}};
    gamer = Gamer::black; out = "No";
    cout << findAnswer(n, m, whiteSet, blackSet, gamer) << "\t" << out << endl;
}

int main()
{
#if DEBUG_MODE
    runTests();
    return 0;
#endif

    int n = 0;
    int m = 0;
    cin >> n >> m;
    if (n < 1 || m < 1)
        return -1;

    PositionSet whiteSet;
    PositionSet blackSet;
    int num = 0, x = 0, y = 0;

    // white
    cin >> num;
    if (num < 1)
        return -1;
    for (int i = 0; i < num; ++i) {
        cin >> x >> y;
        whiteSet.insert({x,y});
    }

    // black
    cin >> num;
    if (num < 1)
        return -1;
    for (int i = 0; i < num; ++i) {
        cin >> x >> y;
        blackSet.insert({x,y});
    }

    // active gamer
    Gamer gamer = Gamer::white;
    string s;
    cin >> s;
    if (s == string("white"))
        gamer = Gamer::white;
    else if (s == string("black"))
        gamer = Gamer::black;
    else
        return -1;

    cout << findAnswer(n, m, whiteSet, blackSet, gamer) << endl;

    return 0;
}

