#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    
int n;
cin >>n;
int c=0;
/*if(n==1){
    cout<<"I hate it";
}
else*/if(n%2==0){
    while(n--){
        
        if(n%2!=0){
        cout<<"I hate ";
        if(n==0){
            cout <<"it";
        }
        else {
            cout<<"that";
        }
        }
        else if(n%2==0){
        cout<<" I love ";
        if(n==0){
            cout <<"it";
        }
        else {
            cout<<"that ";
        }

        
    }
}}

else if(n%2!=0){
    while(n--){
        
        if(n%2==0){
        cout<<"I hate ";
        if(n==0){
            cout <<"it";
        }
        else {
            cout<<"that";
        }
        }
        else if(n%2!=0){
        cout<<" I love ";
        if(n==0){
            cout <<"it";
        }
        else {
            cout<<"that ";
        }

        
    }
}}


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