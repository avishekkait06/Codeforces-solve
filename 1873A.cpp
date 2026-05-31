#include <bits/stdc++.h>
using namespace std;

void solve() {
    string str;
    cin >> str;
if(str =="abc"){
    cout << "YES/n";
    return ;
}
else{
    string t = str;
    swap(t[0], t[1]);
    if(t == "ab"){
        cout << "YES\n";
        return;
    }

    t = str;
    swap(t[1], t[2]);
    if(t == "bc"){
        cout << "YES\n";
        return;
    }

    cout << "NO\n";}
}

int main(){
    long long test;
    cin >> test;
    while(test--){
        solve();
    }
    return 0;
}
