#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int F[n + 1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 3 && j <= i; j++){
            F[i] = F[i - j];
            F[i] %= MOD;
        }
    }
    cout << F[n];
}