#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll F[1000001];

void Fibo(){
    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i <= 1000000; i++){
        F[i] = (F[i - 1] % MOD + F[i - 2] % MOD) % MOD;
    } 
}

int main(){
    Fibo();
    int n; cin >> n;
    cout << F[n - 1];
}