#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll a[1005][1005], path[1005][1005];
int n, m;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }

    path[1][1] = a[1][1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i == 1) path[i][j] = path[i][j - 1] + a[i][j];
            else if(j == 1) path[i][j] = path[i - 1][j] + a[i][j];
            else path[i][j] = max({path[i - 1][j - 1] + a[i][j], path[i - 1][j] + a[i][j], path[i][j - 1] + a[i][j]});
        }
    }

    cout << path[n][m];
}