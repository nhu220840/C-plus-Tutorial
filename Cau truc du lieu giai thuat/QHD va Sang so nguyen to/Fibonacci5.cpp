#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll F[100];

void Fibo(){
    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i <= 92; i++){
        F[i] = F[i - 1] + F[i - 2];
    } 
}

int checkFibo(ll n){
    for(int i = 0; i <= 92; i++){
        if(F[i] == n)
            return 1;
    }
    return 0;
}

int main(){
    Fibo();
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if(checkFibo(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}