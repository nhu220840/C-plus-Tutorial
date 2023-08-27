#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    ll F[n];
    F[0] = a[0];
    for(int i = 1; i < n; i++){
        F[i] = F[i - 1] + a[i];
    }
    int t; cin >> t;
    while(t--){
        int l, r; cin >> l >> r;
        l--; r--;
        if(l == 0)
            cout << F[r] << endl;
        else
            cout << F[r] - F[l - 1] << endl;
    }
}