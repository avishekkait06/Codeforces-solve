#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,sum1=0,coin =0;
    cin >> n;
    vector<int>v(n);
  for(auto &it : v){
  cin >> it;
  sum+=it;
  }
  int split_equal = sum/2;
  sort(v.begin(),v.end(),greater<int>());
  for(auto it : v){
sum1+=it;
coin++;
if(sum1 > split_equal){
    break;
}
  }
  cout << coin << endl;
    return 0;
}