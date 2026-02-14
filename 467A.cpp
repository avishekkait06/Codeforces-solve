#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,count=0;
    cin >> n ;
    vector<pair<int,int>>v(n);
    for(auto &i :v){
        cin >> i.first >> i.second;
    }
    for(int i =0;i<n;i++){
        if(v[i].second-v[i].first>=2){
            count++;
        }
    }
    cout << count <<endl;
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