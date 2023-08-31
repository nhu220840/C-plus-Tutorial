#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll degree(ll n, ll p){
    ll cnt = 0;
    for(ll i = p; i <= n; i *= p){
        cnt = cnt % MOD + n / i % MOD;
    }
    return cnt % MOD;
}

int nt(ll n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return n > 1;
}

ll count(ll n){
    ll res = 1;
    for(int i = 2; i <= n; i++){
        if(nt(i))
            res = (res * (degree(n, i) + 1)) % MOD;
    }
    return res % MOD;
}

int main(){
    ll n; cin >> n;
    cout << count(n);
}