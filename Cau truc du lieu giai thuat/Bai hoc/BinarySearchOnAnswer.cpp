#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(int a[], int n, int L, int H){
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > H)
            ans += a[i] - H;
    }
    return ans >= L;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, L; cin >> n >> L;
    int a[n];
    for(int &x : a) cin >> x;
    int l = 0, r = *max_element(a, a + n);
    ll ans = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(check(a, n, L, m)){
            ans = m;
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    cout << ans;
}