#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
   long long  lent=1 ,maxlent=1 ;
 

     cin >> n ;
     vector<int> v(n);
     for(auto &i : v){
        cin >> i;
     }
     for(int i =0 ; i<n-1 ; i++){
        if(v[i]<= v[i+1]){
         lent++;
        }
        else {
        lent=1;
}
maxlent=max(lent,maxlent);
  

}
cout << maxlent;
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