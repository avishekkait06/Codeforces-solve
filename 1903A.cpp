#include <bits/stdc++.h>
using namespace std;

// ---------- Fast I/O ----------
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

// ---------- Data Types ----------
#define ll long long
#define ull unsigned long long
#define ld long double

// ---------- STL ----------
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

// ---------- Containers ----------
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>

// ---------- Utilities ----------
#define sz(x) (int)(x).size()
#define endl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

// ---------- Loops ----------
#define rep(i,a,b) for(int i=a;i<b;i++)
#define per(i,a,b) for(int i=a;i>=b;i--)

// ---------- Constants ----------
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;
const double PI = acos(-1.0);

// ---------- Directions ----------
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

int dx8[] = {0,0,1,-1,1,1,-1,-1};
int dy8[] = {1,-1,0,0,1,-1,1,-1};

// ---------- Debug ----------
#define debug(x) cerr << #x << " = " << x << endl

// ---------- Math ----------
ll gcdll(ll a, ll b){ return __gcd(a,b); }

ll lcmll(ll a, ll b){
    return a / gcdll(a,b) * b;
}

ll modpow(ll a, ll b, ll mod){
    ll res = 1;
    a %= mod;
    while(b){
        if(b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

bool isPrime(ll n){
    if(n < 2) return false;
    for(ll i=2;i*i<=n;i++)
        if(n%i==0) return false;
    return true;
}

// ---------- Solve ----------
void solve(){
    int n,k; cin >> n>>k;

    vector<int>v(n);
    for(auto &it : v){
        cin >> it;
    }
    if(k>=2){
        
            cout <<"YES"<<endl;

    }
    else {
        if(is_sorted(v.begin(),v.end())){
cout<<"YES"<<endl;
        }
    else
    cout <<"NO"<<endl;}
}

// ---------- Main ----------
int main(){
    optimize();

    int t = 1;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}