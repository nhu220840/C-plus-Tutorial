#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll n, m, k; cin >> n >> m >> k;
    ll tich = 1;
    ll mod = pow(10, k);
    for(int i = 1; i <= m; i++){
        tich = (tich % mod * n % mod) % mod;
    }    
    cout << tich;
}