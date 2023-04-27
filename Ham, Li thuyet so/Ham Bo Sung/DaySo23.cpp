#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

void day23(ll n){
    ll fn, f1 = 1, f2 = 1;
    if(n == 1 || n == 2)
        cout << "1" << endl;
    else{
        for(int i = 2; i < n; i++){
            fn = (2 * f1 % MOD + 3 * f2 % MOD) % MOD;
            f2 = f1;
            f1 = fn;
        }
        cout << fn;
    }
}

int main(){
    ll n; cin >> n;
    day23(n);
}