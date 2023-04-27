#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int checkFibo(ll n){
    if(n == 0 || n == 1)
        return 1;
    else{
        ll fn, f1 = 1, f2 = 0;
        for(int i = 3; i <= n; i++){
            fn = f1 + f2;
            if(fn == n){
                return 1;
            }
            f2 = f1;
            f1 = fn;
        }
        return 0;
    }
}

int main(){
    ll n; cin >> n;
    if(checkFibo(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}