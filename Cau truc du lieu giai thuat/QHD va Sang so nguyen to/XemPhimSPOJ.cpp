#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int C, n; cin >> C >> n;
    ll w[n], F[1000];
    for(ll &x : w) cin >> x;
    F[0] = w[0];
    for(int i = 0; i < n; i++){
        F[i] = F[i - 1] + w[i];
    }
    ll Fmax = LLONG_MIN;
    for(int i = 0; i < n; i++){
        if(F[i] < C && F[i] > Fmax)
            cout << F[i];
    }
}