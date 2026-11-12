#include<bits/stdc++.h>
using namespace std;
int main()
{
char p ; cin >> p;
string a; cin >> a;
string k = "qwertyuiopasdfghjkl;zxcvbnm,./";
for(auto c : a)
{
    int id = k.find(c);
    if(p=='R'){
        cout<<k[id-1];
    }
    else{
                cout<<k[id+1];
 
    }
}
}