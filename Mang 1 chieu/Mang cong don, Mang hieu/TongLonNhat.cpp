#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int D[1000005];

int main(){
    int n, q; cin >> n >> q;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    while(q--){
        int l, r; cin >> l >> r;
        --l; --r;
        D[l] += 1;
        D[r + 1] -= 1;
    }
    int fre[n];
    for(int i = 0; i < n; i++){
        if(i == 0) fre[i] = D[i];
        else fre[i] = fre[i - 1] + D[i];
    }
    sort(a, a + n, greater<int>());
    sort(fre, fre + n, greater<int>());
    ll sum = 0;
    for(int i = 0; i < n; i++){
        sum += 1ll * a[i] * fre[i];
    }
    cout << sum << endl;
}