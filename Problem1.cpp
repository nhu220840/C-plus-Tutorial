#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool recursive(ll arr[], ll num, ll index){
    if(index == num) return true;

    ll tmp = floor(cbrt(arr[index] / 2));
    if(arr[index] == (pow(tmp, 3) + pow(tmp + 1, 3))){
        return recursive(arr, num, index + 1);
    }
    else return false;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    ll a[n];
    for(ll &x : a) cin >> x;
    cout << (recursive(a, n, 0) ? "YES" : "NO");
}