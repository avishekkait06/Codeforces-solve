#include <bits/stdc++.h>
using namespace std;

void solve() {
    string x,y;
    cin >> x>> y;
    
vector<long long>r(x.size());


for(int i = 0 ; i <x.size(); i++){
    if(x[i]!=y[i]  ){
        r[i]=1;
    }
    else {
        r[i]=0;
    }
}
for(auto w : r){
    cout << w;
}
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