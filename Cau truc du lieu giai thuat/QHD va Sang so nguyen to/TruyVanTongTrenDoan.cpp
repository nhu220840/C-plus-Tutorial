#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    ll S[n];
    S[0] = a[0];
    for(int i = 1; i <= n; i++){
        S[i] = S[i - 1] + a[i];
    }
    int t; cin >> t;
    while(t--){
        int l, r; cin >> l >> r;
        cout << S[r] - S[l - 1] << endl;
    }
}