#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    ll a[n];
    for(ll &x : a) cin >> x;
    sort(a, a + n);
    ll sum = 0;
    for(int i = 0; i < n; i++){
        sum = ((sum % MOD) + ((a[i] % MOD) * (i % MOD) % MOD)) % MOD;
    }
    cout << sum;
}