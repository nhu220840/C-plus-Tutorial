#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int first(ll n){
    if(n < 10)
        return n;
    else
        return first(n / 10);
}

int main(){
    ll n; cin >> n;
    cout << first(n);
}