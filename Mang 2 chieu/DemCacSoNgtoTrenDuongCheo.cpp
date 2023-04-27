#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return n > 1;
}

int main(){
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j || i == n - j - 1){
                if(isPrime(a[i][j]))
                    cnt++;
            }
        }
    }
    cout << cnt;
}