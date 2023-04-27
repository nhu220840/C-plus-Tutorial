#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    vector<ll> v1, v2;
    for(int i = 0; i < min(k, n - k); i++){
        v1.push_back(a[i]);
    }
    for(int i = min(k, n - k); i < n; i++){
        v2.push_back(a[i]);
    }
    ll sum1 = accumulate(v1.begin(), v1.end(), 0LL);
    ll sum2 = accumulate(v2.begin(), v2.end(), 0LL);
    cout << sum2 - sum1;
}