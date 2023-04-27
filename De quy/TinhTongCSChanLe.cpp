#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll chan(ll n){
    if(n < 10){
        if(n % 2 == 0)
            return n;
        else
            return 0;
    }
    else{
        int r = n % 10;
        if(r % 2 == 0)
            return r + chan(n / 10);
        else
            return chan(n / 10);
    }
}

ll le(ll n){
    if(n < 10){
        if(n % 2 != 0)
            return n;
        else
            return 0;
    }
    else{
        int r = n % 10;
        if(r % 2 != 0)
            return r + le(n / 10);
        else
            return le(n / 10);
    }
}

int main(){
    ll n; cin >> n;
    cout << chan(n) << endl << le(n);
}