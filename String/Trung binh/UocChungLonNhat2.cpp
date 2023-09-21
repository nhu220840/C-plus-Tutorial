#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b){
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, x, y; cin >> a >> x >> y;
    for(int i = 0; i < gcd(x, y); i++){
        cout << a;
    }
}