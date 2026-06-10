#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n,x, y, z;
    cin >> n >> x >> y >> z;

    int a1 = 0, w1 = 0;
    while(w1<n)
    {
        w1 += x + y;
        a1++;
    }

    int a2 = 0, w2 = 0;
    while(w2<n)
    {
        if (a2 < z)
        {
            w2 += x;
        }
        else
        {
            w2 += x + 10 * y;
        }
        a2++;
    }

    cout << min(a1, a2) << endl;
}

int main()
{

    long long test;
    cin >> test;
    while (test--)
    {
        solve();
    }

    return 0;
}