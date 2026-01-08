#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0, i = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    while (n--)
    {
        if (v[i] != v[i + 1])
        {
            count++;
        }
        i++;
    }
    cout << count << endl;
    return 0;
}