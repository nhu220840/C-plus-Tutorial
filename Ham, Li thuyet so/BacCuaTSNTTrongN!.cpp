#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll degree(ll n, ll p){
    ll cnt = 0;
    while(p <= n){
        cnt += n / p;
        p *= p;
    }
    return cnt;
}

int main(){
    ll n, p; cin >> n >> p;
    cout << degree(n, p);
}