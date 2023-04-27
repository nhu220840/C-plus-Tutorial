#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll binary(ll a, ll b){
    if(b == 0)
        return 1;
    ll x = binary(a, b / 2);
    if(b % 2 == 0)
        return ((x % MOD) * (x % MOD)) % MOD;
    else
        return ((x % MOD) * (x % MOD)) % MOD * (a % MOD) % MOD;
}

int main(){
    ll a, b; cin >> a >> b;
    cout << binary(a, b);
}