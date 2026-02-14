#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, count = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    int max = v[0];
    int min = v[0];
    for (int i = 1; i < n; i++)
    {
        if (v[i] < min)
        {
            min = v[i];
            count++;
        }
        else if (v[i] > max)
        {
            max = v[i];
            count++;
        }
    }

    cout << count << endl;
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