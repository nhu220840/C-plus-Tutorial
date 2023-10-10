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
    ll sum1 = 0, sum2 = 0;
    for(int i = 0; i < min(k, n - k); i++){
        sum1 += a[i];
    }
    for(int i = min(k, n - k); i < n; i++){
        sum2 += a[i];
    }
    cout << sum2 - sum1;
}