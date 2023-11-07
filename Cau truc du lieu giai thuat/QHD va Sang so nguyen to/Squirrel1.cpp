#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll a[1000001], F[1000001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];

    F[1] = 0; //chua di
    F[2] = abs(a[2] - a[1]);
    for(int i = 3; i <= n; i++){
        //Con soc co the di tu o ngay sau no hoac o cach no 2 don vi
        F[i] = min(F[i - 1] + abs(a[i] - a[i - 1]), F[i - 2] + abs(a[i] - a[i - 2]));
    } 
    cout << F[n];
}