#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int sl(ll n){
    if(n < 10)
        return 1;
    else
        return 1 + sl(n / 10);
}

int main(){
    ll n; cin >> n;
    cout << sl(n);
}