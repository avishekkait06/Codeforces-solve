#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> f(n);
    for (int i = 0; i < m; i++)
    {
        cin >> f[i];
    }
    sort(f.begin(), f.end());

    int a = f.front();
    int b = f.back();

    cout << b - a << endl;
}

int main()
{

    // long long test;
    // cin >> test;
    // while(test--)
    // {
    solve();
    // }

    return 0;
}