#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n, greater<int>());
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans += 1ll * a[i] * pow(2, i);
    }
    cout << ans;
}