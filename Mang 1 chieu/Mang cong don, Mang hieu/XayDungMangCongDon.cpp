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
    for(ll x : F) cout << x << " ";
}