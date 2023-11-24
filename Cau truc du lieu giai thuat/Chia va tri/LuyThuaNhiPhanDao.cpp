#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll powMod(ll a, ll n){
    if(n == 1)
        return a;
    ll x = powMod(a, n / 2);
    if(n % 2 == 0) 
        return (x % MOD * x % MOD) % MOD;
    return (x % MOD * x % MOD * a % MOD) % MOD;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    string tmp = to_string(n);
    reverse(tmp.begin(), tmp.end());
    ll m = stoll(tmp);
    cout << powMod(n, m);
}