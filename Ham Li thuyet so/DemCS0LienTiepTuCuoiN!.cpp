#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll cs5(ll n){
    int cnt = 0;
    for(int i = 5; i <= n; i += 5){
        int tmp = i;
        while(tmp % 5 == 0){
            cnt++;
            cnt %= MOD;
            tmp /= 5;
        }
    }
    return cnt;
}

ll degree5(ll n){
    ll res = 0;
    ll p = 5;
    while(n >= p){
        res = (res + n / p) % MOD;
        p *= 5;
    }
    return res;
}
  
int main(){
    ll n; cin >> n;
    cout << degree5(n);
}