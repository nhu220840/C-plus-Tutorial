#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll pow1(ll a, ll b){
    if(b == 0)
        return 1;
    ll x = pow1(a, b / 2);
    if(b % 2 == 0)
        return ((x % MOD) * (x % MOD)) % MOD;
    else
        return ((x % MOD) * (x % MOD)) % MOD * (a % MOD) % MOD;
}

ll pow2(ll a, ll b){
    ll res = 1;
    a = a % MOD;
    while(b){
        if(b % 2 == 1){
            res = (res * a) % MOD;
        }
        b /= 2;
        a = (a * a) % MOD;
    }
    return res;
}

int main(){
    ll a, b; cin >> a >> b;
    cout << pow1(a, b);
}