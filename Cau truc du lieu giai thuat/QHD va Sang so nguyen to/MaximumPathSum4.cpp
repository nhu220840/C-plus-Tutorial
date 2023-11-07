#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll a[1005][1005], trans[1005][1005], path[1005][1005];
int n;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> trans[i][j];
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            a[i][j] = trans[j][i];
        }
    }

    path[1][1] = a[1][1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1) path[i][j] = a[i][j];
            else if(j == 1) path[i][j] = max(path[i - 1][j] + a[i][j], path[i - 1][j + 1] + a[i][j]);
            else if(j == n) path[i][j] = max(path[i - 1][j] + a[i][j], path[i - 1][j - 1] + a[i][j]);
            else path[i][j] = max({path[i - 1][j] + a[i][j], path[i - 1][j - 1] + a[i][j], path[i - 1][j + 1] + a[i][j]});
        }
    }

    ll maxPath = LLONG_MIN;
    for(int i = 1; i <= n; i++){
        maxPath = max(maxPath, path[n][i]);
    }
    cout << maxPath;
}