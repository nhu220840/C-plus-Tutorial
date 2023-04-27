#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void dq(ll n){
    if(n != 0){
        dq(n / 16);
        int x = n % 16;
        if(x > 9)
            cout << char(x + 55);
        else
            cout << x;
    }
}

int main(){
    ll n; cin >> n;
    if(n == 0)
        cout << "0";
    else
        dq(n);
}