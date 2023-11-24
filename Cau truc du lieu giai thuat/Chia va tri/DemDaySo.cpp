#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

//Idea: bai toan chia keo cua Euler
//Xem lai video 9, Vinh tro giang: 7p40s

ll powMod(ll a, ll n){
    if(n == 0) return 1;
    ll x = powMod(a, n / 2);
    if(n % 2 == 0) return (x % MOD * x % MOD) % MOD;
    return (x % MOD * x % MOD * a % MOD) % MOD;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    cout << powMod(2, n - 1);
}