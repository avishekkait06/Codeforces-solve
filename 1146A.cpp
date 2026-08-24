#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int a = 0; int o = 0;
    cin >> s;
    int t = s.size();
    for (int i = 0; i < t; i++)
    {
        if (s[i] == 'a')
            a++;

        else
        {
            o++;
        }
    }
    while (t--)
    {
        if (a > o)
        {
            break;
        }
        else
        {
            o--;
        }
    }
    cout << a + o << endl;

    return 0;
}