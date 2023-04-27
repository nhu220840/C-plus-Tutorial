#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int check(ll n){
    while(n){
        int r = n % 10;
        if(r == (n / 10) % 10)
            return 0;
        n /= 10;
    }
    return 1;
}

int main(){
    ll a, b; cin >> a >> b;
}