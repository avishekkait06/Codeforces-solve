#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N--)
    {
        string S, T;
        cin >> S >> T;

        string result = "";

        int n = max(S.size(), T.size());

        for (int i = 0; i < n; i++)
        {
            if (i < S.size())
                result.push_back(S[i]);
            if (i < T.size())
                result.push_back(T[i]);
        }

        cout << result << endl;
    }

    return 0;
}
