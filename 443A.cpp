#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    getline(cin, s);

    set<char> s1;

    for (auto c : s) {
        if (c >= 'a' && c <= 'z') {
            s1.insert(c);
        }
    }

    cout << s1.size() << endl;
}

int main() {
    solve();

    return 0;
}
