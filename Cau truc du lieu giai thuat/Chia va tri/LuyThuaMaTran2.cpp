#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;


struct matrix{
    ll A[20][20];
    int n;

    friend matrix operator * (matrix x, matrix y){
        matrix result;
        result.n = x.n;
        for(int i = 0; i < x.n; i++){
            for(int j = 0; j < x.n; j++){
                result.A[i][j] = 0;
                for(int k = 0; k < x.n; k++){
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
    cin >> x.n;
    ll k; cin >> k;

    for(int i = 0; i < x.n; i++){
        for(int j = 0; j < x.n; j++){
            cin >> x.A[i][j];
        }
    }

    matrix res = myPow(x, k);

    ll sum = 0;
    
    for(int i = 0; i < x.n; i++){
        sum += res.A[i][x.n - 1];
        sum %= MOD;
    }
    cout << sum;
}