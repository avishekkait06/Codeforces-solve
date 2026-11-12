#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
while(t--){
    int a,b; cin>>a>>b;
    if(b>=a){
        cout<<-1<<endl;
    }
    else if(b==1){
        cout<<1<<endl;
    }
    else{
      //  int x = __gcd(a, b);
   int x = min(b,a-b);
       cout<< x<<endl;
    }
 
}
return 0;
}