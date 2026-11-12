#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, t; cin >> n >> t;
 
    vector<int> a(n);
 
    for (int &it : a)
    {
        cin >> it;
    }
 
    int l = 0, sum = 0, ans = 0;
 
    for (int r = 0; r < n; r++)
    {
        sum += a[r];
 
        while(sum > t)
        {
            sum -= a[l];
            l++;
        }
 
        ans = max(ans, r - l + 1);
    }
 
    cout << ans << endl;
 
    return 0;
}