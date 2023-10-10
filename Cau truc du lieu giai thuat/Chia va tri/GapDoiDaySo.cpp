#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int Find(int n, ll k){
    ll lastF = pow(2, n - 1);
    if(k == lastF) return n;

    if(k < lastF){
        return Find(n - 1, k);
    }
    else{
        return Find(n - 1, k - lastF);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k; cin >> n >> k;
    cout << Find(n, k);
}