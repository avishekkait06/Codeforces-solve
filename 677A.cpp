#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n , h ,width=0;
    cin >>n>>h;
    vector<int>v(n);
    for(auto &i : v){
        cin >> i;
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(v[i]<= h){
          width++;  
        }
         else if(v[i]>h){
            width+=2;
        }
        }
        cout << width;
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