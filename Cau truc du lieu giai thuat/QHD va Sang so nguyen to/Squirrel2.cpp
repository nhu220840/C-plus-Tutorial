#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll a[1000001], F[1000001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];

    F[1] = 0; //chua di
    for(int i = 2; i <= n; i++){
        //Con soc co the di tu o ngay sau no hoac o cach no k don vi
        ll min_dis = LLONG_MAX;
        for(int j = 1; j <= k; j++){
            if(i - j >= 1) min_dis = min(min_dis, F[i - j] + abs(a[i] - a[i - j]));
        }
        F[i] = min_dis;
    } 
    cout << F[n];
}