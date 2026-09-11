#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ; cin >> t;

int min = 0 ;

int mint=0;

while(t--)

{

int a , b; cin >> a >> b;

mint-= a ; mint+= b;

if(mint>min) min= mint ;

}

cout << min << endl;

return 0;
}