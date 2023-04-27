#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n][n];;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int sum[n][n];
    for(int i = 0; i < n; i++){
        sum[i][0] = a[i][0];
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == 0)
                sum[j][i] = max(sum[j][i - 1], sum[j + 1][i - 1]) + a[j][i];
            else if(j == n - 1)
                sum[j][i] = max(sum[j - 1][i - 1], sum[j][i - 1]) + a[j][i];
            else
                sum[j][i] = max({sum[j - 1][i - 1], sum[j][i - 1], sum[j + 1][i - 1]}) + a[j][i];
        }
    }
    int max_val = INT_MIN;
    for(int i = 0; i < n; i++){
        max_val = max(max_val, sum[i][n - 1]);
    }
    cout << max_val;
}