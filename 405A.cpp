#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> V(n);
    for (auto &i : V) {
        cin >> i;
    }
    sort(V.begin(), V.end()); 
    for (int x : V) {
        cout << x << " ";
    }
    return 0;
}