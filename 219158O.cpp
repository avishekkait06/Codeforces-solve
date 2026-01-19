#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, c = 0;
    char S;
    cin >> A >> S >> B;
    if (S == '+')
    {
        c = A + B;
    }
    else if (S == '-')
    {
        c = A - B;
    }
    else if (S == '/')
    {
        c = A / B;
    }

    else if (S == '*')
    {
        c = A * B;
    }

    cout << c << endl;

    return 0;
}
