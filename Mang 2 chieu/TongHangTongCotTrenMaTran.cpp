#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll n, m; cin >> n >> m;
    ll a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        ll sum = 0;
        for(int j = 0; j < m; j++){
            sum += a[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
    for(int i = 0; i < m; i++){
        ll sum1 = 0;
        for(int j = 0; j < n; j++){
            sum1 += a[j][i];
        }
        cout << sum1 << " ";
    }
}
