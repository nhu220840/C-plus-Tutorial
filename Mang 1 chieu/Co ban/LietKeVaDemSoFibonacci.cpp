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
        if(n == F[i])
            return 1;
    }
    return 0;
}

int main(){
    Fibo();
    ll n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int check = 0;
    for(int i = 0; i < n; i++){
        if(checkFibo(a[i])){
            cout << a[i] << " ";
            check = 1;
        }
    }
    if(check == 0)
        cout << "NONE";
}