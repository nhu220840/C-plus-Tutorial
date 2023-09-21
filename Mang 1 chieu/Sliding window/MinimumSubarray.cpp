#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    ll sum = 0;
    int ans = INT_MAX, pos = -1;
    int l = 0;
    for(int r = 0; r < n; r++){
        sum += a[r];
        if(sum >= k){
            int cur_len = r - l + 1
            if(sum < ans){
            ans = r - l + 1;
            pos = l;
            sum -= a[l];
            l++;
            }
        }
    }
    if(pos == -1) cout << pos;
    else{
        for(int i = pos; i <= pos + ans; i++){
            cout << a[i] << " ";
        }
    }
}