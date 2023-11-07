#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll a[1000001], sum[1000001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    sum[1] = a[1];
    sum[2] = max(a[1], a[2]);

    for(int i = 3; i <= n; i++){
        sum[i] = max(sum[i - 1], sum[i - 2] + a[i]);
    }

    cout << sum[n];
}