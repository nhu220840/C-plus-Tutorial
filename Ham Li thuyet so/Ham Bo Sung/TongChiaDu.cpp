#include <bits/stdc++.h>

using namespace std;
const int MOD = 1e9 + 7;

int main(){
    long long n; cin >> n;
    long long sum = 0;
    for(int i = 0; i < n; i++){
        long long x; cin >> x;
        sum = (sum % MOD + x % MOD) % MOD;
    }
    cout << sum;
}