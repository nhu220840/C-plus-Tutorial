#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int sum(ll n){
    if(n < 10)
        return n;
    else
        return n % 10 + sum(n / 10);
}

int main(){
    ll n; cin >> n;
    cout << sum(n);
}