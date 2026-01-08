#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        long long int move = 0;

        while(a%b!=0)
        {
            a++;
            move++;
        }
        cout << move << endl;
    }

    return 0;
}