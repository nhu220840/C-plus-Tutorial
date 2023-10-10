#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

const int MAX_N = 100; // Thay thế giá trị này bằng giới hạn tối đa của n

struct matrix{
    ll A[MAX_N][MAX_N];

    friend matrix operator * (matrix x, matrix y){
        matrix result;
        for(int i = 0; i < MAX_N; i++){
            for(int j = 0; j < MAX_N; j++){
                result.A[i][j] = 0;
                for(int k = 0; k < MAX_N; k++){
                    result.A[i][j] += x.A[i][k] * y.A[k][j];
                    result.A[i][j] %= MOD;
                }
            }
        }
        return result;
    }
};

void enterMatrix(matrix &x, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> x.A[i][j];
        }
    }
}

void printMatrix(matrix x, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << x.A[i][j] << " ";
        }
        cout << endl;
    }
}

matrix myPow(matrix x, ll k, int n){
    if(k == 1){
        return x;
    }
    matrix X = myPow(x, k / 2, n);
    if(k % 2 == 1)
        return X * X * x;
    else
        return X * X;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m; 
    cin >> n >> m;

    matrix x, y;
    enterMatrix(x, n, m);
    enterMatrix(y, n, m);

    matrix res1 = x * y;
    matrix res2 = (x * x) * (y * y);
    printMatrix(res1 * res1, n, m);
    cout << endl;
    printMatrix(res2, n, m);

    return 0;
}
