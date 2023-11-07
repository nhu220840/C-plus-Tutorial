#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
    }
    ll cnt = 0;
    for(auto it : mp){
        cnt += ceil(1.0 * it.second / 4);
    }
    cout << cnt;
}