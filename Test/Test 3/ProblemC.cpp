#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll row_sum[1001][1001], col_sum[1001][1001];

int main(){
    int n, m; cin >> n >> m;
    int a[n + 1][m + 1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            row_sum[i][j] = row_sum[i][j - 1] + a[i][j];
            col_sum[i][j] = col_sum[i - 1][j] + a[i][j];
        }
    }

    int q; cin >> q;
    while(q--){
        int k; cin >> k;
        if(k == 1){
            int h1, c1, c2; cin >> h1 >> c1 >> c2;
            cout << row_sum[h1][c2] - row_sum[h1][c1 - 1] << endl;
        }
        else{
            int c1, h1, h2; cin >> c1 >> h1 >> h2;
            cout << col_sum[h2][c1] - col_sum[h1 - 1][c1] << endl;
        }
    }
}