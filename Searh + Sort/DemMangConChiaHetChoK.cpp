#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll sum = 0;
    ll ans = 0;
    map<ll, int> mp;
    for(int i = 0; i < n; i++){
        sum += a[i];
        sum = (sum % n + n) % n; //Chuyen het sang so duong
        if(sum == 0) ans++;
        if(mp.count(sum)){
            ans += mp[sum];
        }
        mp[sum]++;
    }
    cout << ans;
}
