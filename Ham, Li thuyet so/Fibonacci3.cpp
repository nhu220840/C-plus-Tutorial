#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void inFibo(ll n){
    if(n == 1 || n == 2)
        cout << "1" << endl;
    else{
        ll fn, f1 = 1, f2 = 1;
        for(int i = 2; i < n; i++){
            fn = f1 + f2;
            if(fn >= n){
                break;
            }
            f2 = f1;
            f1 = fn;
        }
        cout << fn;
    }
}

int main(){
    ll n; cin >> n;
    inFibo(n);
}