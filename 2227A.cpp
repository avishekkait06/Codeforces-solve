#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int  x,y;
    cin >> x>>y;
    if(x%2==1 && y%2==1){
        cout <<"NO";
    }
    else {
    cout <<"YES" ;}
}

int main()
{

    long long test;
    cin >> test;
    while (test--)
    {
        solve();
        cout<<endl;
    }

    return 0;
}