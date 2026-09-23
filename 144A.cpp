#include <bits/stdc++.h>
using namespace std;
 
void solve(){
 
    int n; cin >> n;
 
    vector<int>a(n);
 
    for(auto &it : a)
    {
        cin >> it;
    }
 
    int min = *min_element(a.begin(),a.end());
    int max = *max_element(a.begin(),a.end());
 
    int maxPos = 0;
    int minPos = 0;
 
    for(int i = 0; i < n; i++)
    {
        if(a[i] == max)
        {
            maxPos = i;
            break;
        }
    }
 
    for(int i = n - 1; i >= 0; i--)
    {
        if(a[i] == min)
        {
            minPos = i;
            break;
        }
    }
 
    int ans = maxPos + (n - 1 - minPos);
 
    if(maxPos > minPos)
    {
        ans--;
    }
 
    cout << ans << endl;
}
 
int main() {
 
    solve();
 
    return 0;
}