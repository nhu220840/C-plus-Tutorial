#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool prime[1000001];

void sieve(){
    for(int i = 0; i <= 1000000; i++){
        prime[i] = true;
    }
    prime[0] = prime[1] = false;
    for(int i = 2; i <= sqrt(1000000); i++){
        if(prime[i] == true){
            for(int j = i * i; j <= 1000000; j += i){
                prime[j] = false;
            }
        }
    }
}

ll res[1000001];

void product_of_primes(){
    res[0] = 0;
    res[1] = 0;
    res[2] = 2;
    for(int i = 3; i <= 1000000; i++){
        if(prime[i]){
            res[i] = res[i - 1] * i;
            res[i] %= MOD;
        }
        else{
            res[i] = res[i - 1];
        }
    }
}

int main(){
    int t; cin >> t;
    sieve();
    product_of_primes();
    while(t--){
        int n; cin >> n;
        cout << res[n] << endl;
    }
}
