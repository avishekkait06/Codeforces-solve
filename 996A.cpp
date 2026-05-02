#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long m;
    cin >> m;

    long long c = 0;

    c += m / 100;
    m %= 100;

    c += m / 20;
    m %= 20;

    c += m / 10;
    m %= 10;

    c += m / 5;
    m %= 5;

    c += m / 1;

    cout << c;
}

int main()
{
    solve();
    return 0;
}