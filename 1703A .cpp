#include <bits/stdc++.h>
using namespace std;

void solve() {
 
        string x;
        cin >> x;
      string y = "";
    for (char c : x) {
        y += tolower(c);
    }
        if(y=="yes"){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    
    }
int main() {
    
     long long test;
    cin >> test;
    while(test--)
    {
        solve();
     }
    
    return 0;
}