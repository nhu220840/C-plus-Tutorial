#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool checkFibo(ll n){
    if(n == 0 || n == 1)
        return true;
    ll fn, f1 = 1, f2 = 0;
    for(int i = 2; i <= 92; i++){
        fn = f1 + f2;
        if(n == fn)
            return true;
        f2 = f1;
        f1 = fn;
    }
    return false;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if(checkFibo(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}