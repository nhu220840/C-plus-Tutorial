#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int prime[1000001];

void sieve(){
    for(int i = 0; i <= 1000000; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= sqrt(1000000); i++){
        if(prime[i] == 1){
            for(int j = i * i; j <= 1000000; j += i){
                prime[j] = 0;
            }
        }
    }
}

ll F[1000001];

void cnt(){
    F[0] = 0;
    F[1] = 0;
    for(int i = 2; i <= 1000000; i++){
        F[i] = F[i - 1] + prime[i];
    }
}

int main(){
    int t; cin >> t;
    sieve();
    cnt();
    while(t--){
        int l, r; cin >> l >> r;
        cout << F[r] - F[l - 1] << endl;
    }
}