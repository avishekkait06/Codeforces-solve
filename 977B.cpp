#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<string, int> counts;
    int max_count = 0;
    string res = "";

    for (int i = 0; i < n - 1; i++) {
        string gram = s.substr(i, 2);
        counts[gram]++;
        
        if (counts[gram] > max_count) {
            max_count = counts[gram];
            res = gram;
        }
    }

    cout << res << endl;

    return 0;
}