#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int sum[n][n];
    for(int i = 0; i < n; i++){
        sum[0][i] = a[0][i];
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == 0)
                sum[i][j] = max(sum[i - 1][j], sum[i - 1][j + 1]) + a[i][j];
            else if(j == n - 1)
                sum[i][j] = max(sum[i - 1][j], sum[i - 1][j - 1]) + a[i][j];
            else
                sum[i][j] = max({sum[i - 1][j], sum[i - 1][j - 1], sum[i - 1][j + 1]}) + a[i][j];
        }
    }
    int max_val = INT_MIN;
    for(int i = 0; i < n; i++){
        if(sum[n - 1][i] > max_val)
            max_val = sum[n - 1][i];
    }
    cout << max_val;
}