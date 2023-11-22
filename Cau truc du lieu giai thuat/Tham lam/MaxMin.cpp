#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    int ans = INT_MAX;
    for(int i = k - 1; i < n; i++){
        ans = min(ans, abs(a[i] - a[i - k + 1]));
    }
    cout << ans;
}