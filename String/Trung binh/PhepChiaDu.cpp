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

int main(){
    string n;
    ll m;
    cin >> n >> m;
    cout << remainder(n, m);
}