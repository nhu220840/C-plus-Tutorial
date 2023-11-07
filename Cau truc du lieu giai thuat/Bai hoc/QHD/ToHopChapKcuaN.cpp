#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll C[1005][1005];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i = 0; i <= 1000; i++){
        for(int j = 0; j <= i; j++){
            //Xay dung hang dau tien voi C 0 n = 1
            //Xay dung duong cheo voi C n n = 1
            if(j == 0 || i == j)
                C[i][j] = 1;
            else{
                //Xay dung cac so con lai theo cong thuc C k n = C k - 1 n - 1 + C k n - 1
                C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % MOD;
            }
        }
    }

    for(int i = 0; i <= 10; i++){
        for(int j = 0; j <= i; j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}