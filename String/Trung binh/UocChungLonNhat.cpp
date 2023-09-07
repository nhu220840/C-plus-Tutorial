#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll remainder(string s, ll m){
    ll r = 0;
    for(int i = 0; i < s.length(); i++){
        r = r * 10 + (s[i] - '0');
        r %= m;
    }
    return r;
}

ll gcd(ll a, ll b){
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main(){
    string n;
    ll m;
    cin >> n >> m;
    ll remain = remainder(n, m);
    cout << gcd(m, remain);
}