#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll dp[20][200];

void qhd(){
    for(int i = 0; i <= 20; i++){
        dp[i][0] = 0;
    }
    for(int j = 0; j <= 200; j++){
        dp[0][j] = 0;
    }
    for(int j = 1; j <= 9; j++){
        dp[1][j] = 1;
    }
    for(int i = 1; i <= 19; i++){
        for(int so = 0; so <= 9; so++){
            for(int j = so; j <= 180; j++){
                dp[i][j] += dp[i - 1][j - so];
            }
        }
    }
}


 
int main(){
    qhd();
    int n, k; cin >> n >> k;
    cout << dp[n][k] << endl;
}