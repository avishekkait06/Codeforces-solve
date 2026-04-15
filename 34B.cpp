#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n ,m;
    int r = 0 ;
    cin >> n >> m ;
    vector<int>v(n);
    for(auto &i : v){
        cin >> i;
    }
    sort(v.begin(),v.end());
    for(int i =0 ; i<m ; i++){
        if(v[i]<=0)
        r+= v[i];
        else 
        break;
    }

    cout << -r ;
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