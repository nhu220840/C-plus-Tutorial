#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, m; cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    ll sum[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum[i][j] = a[i][j];
            if(i == 0 && j == 0)
                sum[i][j] = sum[i][j];
            else if(i == 0)
                sum[i][j] += sum[i][j - 1];
            else if(j == 0)
                sum[i][j] += sum[i - 1][j];
            else
                sum[i][j] += max(sum[i - 1][j], sum[i][j - 1]);
        }
    }
    cout << sum[n - 1][m - 1];
}