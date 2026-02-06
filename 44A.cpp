#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t ;
    int count =0;

    vector<pair<string,string>> v(t);

    for(int i = 0 ; i < t ; i++){
        cin >> v[i].first >> v[i].second ;
    }
sort(v.begin(),v.end());
    for(int i = 0 ; i < t ; i++){
    
if (v[i]!=v[i+1]){
    count++;
  
}
       }
    
    if(count == 0 ){
       cout << "1"  <<endl;
    } else
    cout << count << endl;

    return 0;
}
