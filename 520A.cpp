#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >>n;
    cin >>s;
    set<char>letters;
    for(auto &c : s){
        letters.insert(tolower(c));
    }
    if(letters.size()==26){
        cout << "YES";
    }
    else{
        cout<<"NO";
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