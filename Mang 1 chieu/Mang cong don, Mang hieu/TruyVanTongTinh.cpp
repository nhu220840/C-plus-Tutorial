#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, q; cin >> n >> q;
    int a[n];
    for(int &x : a) cin >> x;
    ll F[n];
    for(int i = 0; i < n; i++){
        if(i == 0)
            F[i] = a[i];
        else
            F[i] = F[i - 1] + a[i];
    }
    while(q--){
        int l, r; cin >> l >> r;
        if(l == 0)
            cout << F[r] << endl;
        else
            cout << F[r] - F[l - 1] << endl;
    }
}