#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, x; cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    map<ll, int> mp;
    ll sum = 0;
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
        if(sum == x)
            cnt++;
        if(mp.find(sum - x) != mp.end())
            cnt += mp[sum - x];
        mp[sum]++;
    }
    cout << cnt;
}