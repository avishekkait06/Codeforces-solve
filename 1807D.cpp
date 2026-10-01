#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ; cin >> t; 
    
    while(t--){
        int n ,t1; cin >> n >> t1;
        
        vector<long long> a(n + 1);
        vector<long long> prefix(n + 1, 0);

        for (int i = 1; i <= n; i++) 
        {
            cin >> a[i];
            prefix[i] = prefix[i - 1] + a[i];
        }

        long long totalSum = prefix[n];

        while(t1--)
        {
            long long l, r, k;
            cin >> l >> r >> k;

            long long sum = prefix[r] - prefix[l - 1];

            long long newSum = totalSum - sum + (r - l + 1) * k;

            if(newSum % 2 != 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}