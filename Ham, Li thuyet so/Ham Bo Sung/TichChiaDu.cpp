#include <bits/stdc++.h>

using namespace std;
const int MOD = 1e9 + 7;

int main(){
    int n; cin >> n;
    long long tich = 1;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        tich = (tich % MOD * x % MOD) % MOD;
    }
    cout << tich;
}