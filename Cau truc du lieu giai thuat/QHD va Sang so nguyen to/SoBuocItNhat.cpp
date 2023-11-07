#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//Tu tuong cua bai day con tang dai nhat
//So buoc it nhat = tong so phan tu - so phan tu cua day con tang dai nhat

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n + 1], dp[n + 1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    int res = 1;
    for(int i = 1; i <= n; i++){
        dp[i] = 1;
        for(int j = 1; j <= i - 1; j++){
            if(a[j] < a[i]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        res = max(res, dp[i]);
    }
    cout << n - res;
}