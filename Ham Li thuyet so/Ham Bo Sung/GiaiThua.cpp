#include <bits/stdc++.h>

using namespace std;
const int MOD = 1e9 + 7;

int main(){
    int n; cin >> n;
    long long gt = 1;
    for(int i = 1; i <= n; i++){
        gt = (gt % MOD * i % MOD) % MOD;
        cout << gt << endl;
    }
}