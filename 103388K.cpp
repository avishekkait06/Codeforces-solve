#include <bits/stdc++.h>
using namespace std;
 
int main()
 {
    int k, n, m;
    cin >> k >> n >> m;
 
    vector<int> a(m);
 
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
 
    int last = 0;
 
    for (int i = 0; i < m; i++)
     {
        if (a[i] - last >= k)
         {
            cout << "Y" << endl;
            return 0;
        }
        last = a[i];
    }
 
    if (n - last >= k)
     {
        cout << "Y" << endl;
    } else 
    {
        cout << "N" << endl;
    }
 
}