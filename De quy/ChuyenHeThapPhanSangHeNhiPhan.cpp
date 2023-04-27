#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void dq(ll n){
    if(n != 0){
        dq(n / 2);
        cout << n % 2;
    }
}

int main(){
    ll n; cin >> n;
    if(n == 0)
        cout << "0";
    else
        dq(n);
}