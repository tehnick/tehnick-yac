#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
#include <cstdint>
#include <numeric>

bool check(const std::vector<int>& as, const std::vector<int>& bs) {
    int64_t diffA = as.back() - as.front();
    int64_t diffB = bs.back() - bs.front();
    for (size_t i = 1; i < as.size(); i++) {
        int64_t a = int64_t(as[i] - as[0]) * diffB;
        int64_t b = int64_t(bs[i] - bs[0]) * diffA;
        if (a != b) {
            return false;
        }
    }
    return true;
}

void run(std::istream &in, std::ostream &out) {
    int T;
    in >> T;
    for (int test = 0; test < T; test++) {
        int n;
        in >> n;
        std::vector<int> as(n);
        for (int i = 0; i < n; i++) {
            in >> as[i];
        }
        int m;
        in >> m;
        std::vector<int> bs(m);
        for (int i = 0; i < m; i++) {
            in >> bs[i];
        }
        if (n != m) {
            out << "NO\n";
            continue;
        }
        if (n <= 1) {
            out << "YES\n";
            continue;
        }
        std::sort(as.begin(), as.end());
        std::sort(bs.begin(), bs.end());
        if (as.front() == as.back()) {
            if (bs.front() == bs.back()) {
                out << "YES\n";
                continue;
            } else {
                out << "NO\n";
                continue;
            }
        } else if (bs.front() == bs.back()) {
            out << "NO\n";
            continue;
        }
        std::vector<int> negAs(n);
        for (int i = 0; i < n; i++) {
            negAs[i] = -as[i];
        }
        std::reverse(negAs.begin(), negAs.end());
        if (check(as, bs) || check(negAs, bs)) {
            out << "YES\n";
        } else {
            out << "NO\n";
        }
    }
}

int main() {
  std::cin.sync_with_stdio(false);
  std::cin.tie(nullptr);
  run(std::cin, std::cout);
  return 0;
}
