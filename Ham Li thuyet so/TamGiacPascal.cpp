#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll C[105][105];
void pascal(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(j == 0 || i == j){
                C[i][j] = 1;
            }
            else
                C[i][j] = C[i - 1][j - 1] % MOD + C[i - 1][j]  % MOD;
            cout << C[i][j] % MOD << " ";
        }
        cout << endl;
    }
}

int main(){
    int n; cin >> n;
    pascal(n);
}