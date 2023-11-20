#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    ll a[n];
    for(ll &x : a) cin >> x;
    sort(a, a + n);
    ll ans = 1;
    if(n == 2) ans = a[0] * a[1];
    else ans = max({ans, a[0] * a[1] * a[2], a[n - 1] * a[n - 2] * a[n - 3], a[0] * a[1] * a[n - 1], a[0] * a[1], a[n - 1] * a[n - 2]});
    cout << ans;
}