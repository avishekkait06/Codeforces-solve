#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 0;
    cin >> n;
    while (n--)
    {
        vector<int> a(4);
        for (auto &i : a)
        {
            cin >> i;
        }
        for (int i = 1; i < 4; i++)
        {
            if (a[0] < a[i])
            {
                c++;
            }
        }
        cout << c << endl;
        c = 0;
    }

    return 0;
}