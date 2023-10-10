#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

struct matrix{
    ll A[2][2];

    friend matrix operator * (matrix x, matrix y){
        matrix result;
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                result.A[i][j] = 0;
                for(int k = 0; k < 2; k++){
                    result.A[i][j] += x.A[i][k] * y.A[k][j];
                    result.A[i][j] %= MOD;
                }
            }
        }
        return result;
    }
};

matrix myPow(matrix x, ll k){
    if(k == 1){
        return x;
    }
    matrix X = myPow(x, k / 2);
    if(k % 2 == 1)
        return X * X * x;
    else
        return X * X;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    matrix x;
    x.A[0][0] = 1;
    x.A[0][1] = 1;
    x.A[1][0] = 1;
    x.A[1][1] = 0;

    ll n; cin >> n;

    matrix res = myPow(x, n);
    cout << res.A[1][0] << endl;
}