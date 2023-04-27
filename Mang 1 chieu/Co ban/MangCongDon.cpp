#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    ll f[n];
    f[0] = a[0];
    for(int i = 1; i < n; i++){
        f[i] = a[i] + f[i - 1];
    }
    for(int i = 0; i < n; i++){
        cout << f[i] << " ";
    }
}