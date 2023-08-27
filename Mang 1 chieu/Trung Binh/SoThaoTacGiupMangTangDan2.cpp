#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, d; cin >> n >> d;
    int a[n];
    for(int &x : a) cin >> x;
    ll ans = 0;
    for(int i = 1; i < n; i++){
        if(a[i] <= a[i - 1]){
            int tmp = a[i - 1] - a[i] + 1;
            int q;
            if(tmp % d == 0)
                q = tmp / d;
            else
                q = tmp / d + 1;
            ans += q;
            a[i] += q * d;
        }
    }
    cout << ans;
}