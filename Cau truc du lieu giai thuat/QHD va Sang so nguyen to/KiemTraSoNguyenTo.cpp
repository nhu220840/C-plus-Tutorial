#include <bits/stdc++.h>

using namespace std;

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

int main(){
    sieve();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(prime[n] == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}