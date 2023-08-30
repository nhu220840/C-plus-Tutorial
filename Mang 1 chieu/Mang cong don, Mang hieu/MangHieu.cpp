#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    ll D[n];
    for(int i = 0; i < n; i++){
        if(i == 0)
            D[i] = a[i];
        else
            D[i] = a[i] - a[i - 1];
    }    
    for(ll x : D) cout << x << " ";
}