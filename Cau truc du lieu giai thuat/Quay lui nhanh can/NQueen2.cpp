#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, X[105][105], column[105], d1[105], d2[105]; 
ll value = 0;
ll ans = INT_MIN;


void Try(int i){
    for(int j = 1; j <= n; j++){
        if(column[j] == 0 && d1[i - j + n] == 0 && d2[i + j - 1] == 0){
            value += X[i][j];
            column[j] = d1[i - j + n] = d2[i + j - 1] = 1;
            if(i == n){
                ans = max(ans, value);
            }
            else{
                Try(i + 1);
            }
            column[j] = d1[i - j + n] = d2[i + j - 1] = 0;
            value -= X[i][j];
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    n = 8;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> X[i][j];
        }
    }
    Try(1);
    cout << ans;
}