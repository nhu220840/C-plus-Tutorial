#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int isPrime[1000001];

void sieve(){
    for(int i = 0; i < 1000000; i++){
        isPrime[i] = 1;
    }
    isPrime[0] = isPrime[1] = 0;
    for(int i = 2; i <= sqrt(1000000); i++){
        if(isPrime[i]){
            for(int j = i * i; j <= 1000000; j += i){
                isPrime[j] = 0;
            }
        }
    }
}

ll F[1000001];

void numsOfPrime(){
    F[0] = 0;
    F[1] = 0;
    F[2] = 1;
    for(int i = 3; i <= 1000000; i++){
        F[i] = F[i - 1] + isPrime[i];
    }
}

int main(){
    int q; cin >> q;
    sieve();
    numsOfPrime();
    while(q--){
        int l, r; cin >> l >> r;
        cout << F[r] - F[l - 1] << endl;
    }
}