#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll myPow(ll n, ll k){
    if(k == 0)
        return 1;
    ll x = myPow(n, k / 2);
    if(k % 2 == 1)
        return ((x % MOD) * (x % MOD)) % MOD * ((n % MOD) % MOD) % MOD;
    else
        return ((x % MOD) * (x % MOD)) % MOD;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k; cin >> n >> k;
    cout << myPow(n, k);
}