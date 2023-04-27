#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll maxi(ll n){
    if(n < 10)
        return n;
    else
        return max({n % 10, maxi(n / 10)});
}

ll mini(ll n){
    if(n < 10)
        return n;
    else
        return min({n % 10, mini(n / 10)});
}

int main(){
    ll n; cin >> n;
    cout << maxi(n) << " " << mini(n);
}