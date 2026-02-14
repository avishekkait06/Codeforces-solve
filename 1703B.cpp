#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    set<char> solved;
    int balloons = 0;

    for (char c : s) {
        balloons++;
        if (solved.insert(c).second) {
            balloons++;
        }
    }

    cout << balloons << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
