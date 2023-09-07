#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;

ll remainder(string s, ll m){
    ll r = 0;
    for(int i = 0; i < s.length(); i++){
        r = r * 10 + (s[i] - '0');
        r %= m;
    }
    return r;
}

ll myPow(ll a, ll b){
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
    string n;
    ll m; 
    cin >> n >> m;
    cout << myPow(remainder(n, MOD), m);
}