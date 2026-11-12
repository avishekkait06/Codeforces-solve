#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    int a[5] = {0};
 
    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        a[s]++;
    }
 
    int ans = a[4];
 
    ans += a[3];
    a[1] = max(0, a[1] - a[3]);
 
    ans += a[2] / 2;
    a[2] %= 2;
 
    if (a[2] == 1)
    {
        ans++;
        a[1] = max(0, a[1] - 2);
    }
 
    ans += (a[1] + 3) / 4;
 
    cout << ans << endl;
 
   
} 