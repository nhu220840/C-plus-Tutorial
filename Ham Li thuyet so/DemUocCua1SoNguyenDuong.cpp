#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    long long mod = 1e9 + 7;
    long long cnt = 1;
    for(int i = 0; i < t; i++){
        int p, e; cin >> p >> e;
        cnt = (cnt * (e + 1)) % mod;
    }
    cout << cnt;
}