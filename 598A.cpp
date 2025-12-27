#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;
   while(t--)
{
   long long  int n ;
    cin >> n;
    long long int sum = n*(n+1)/2;
    
    long long sumof2=0;
    long long x =1;
    while(x<=n)
    {
        sumof2+=x;
        x=x*2;
    }
    cout << sum - 2*sumof2 << endl;
}
    return 0;
}
