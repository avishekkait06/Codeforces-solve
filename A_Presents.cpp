#include <bits/stdc++.h>
using namespace std;

void solve() {
  
    int n;
    cin >> n;

    vector<int> p(n+1), ans(n+1);

    for(int i = 1; i <= n; i++) {
        cin >> p[i];
        ans[p[i]] = i;
    }

    for(int i = 1; i <= n; i++)
        cout << ans[i] << " ";

}

int main() {
    
    // long long test;
    // cin >> test;
    // while(test--)
    // {
        solve();
    // }
    
    return 0;
}