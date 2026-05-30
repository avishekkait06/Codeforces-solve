#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s ="codeforces";
    char c;
    bool f = 0;
    cin >> c;
    for(int i =0 ;i<s.size();i++){
    if(s[i]== c){
    f =1;
    break;
}
    }
    if(f){
        cout << "YES"<<endl;
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