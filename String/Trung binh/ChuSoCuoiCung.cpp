#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll remainder(string s, int m){
    ll r = 0;
    for(int i = 0; i < s.length(); i++){
        r = r * 10 + (s[i] - '0');
        r %= m;
    }
    return r;
}

int main(){
    string n; cin >> n;
    int lastNumber = remainder(n, 4);
    if(lastNumber == 0) cout << 6;
    if(lastNumber == 1) cout << 8;
    if(lastNumber == 2) cout << 4;
    if(lastNumber == 3) cout << 2;
}