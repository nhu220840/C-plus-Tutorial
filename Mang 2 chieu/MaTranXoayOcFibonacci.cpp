#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll F[100];

void Fibo(){
    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i <= 92; i++){
        F[i] = F[i - 1] + F[i - 2];
    }
}

int main(){
    Fibo();
    int n; cin >> n;
    ll a[n][n];
    int cnt = 0;
    int c1 = 0, c2 = n - 1, h1 = 0, h2 = n - 1;
    while(cnt < n * n){
        for(int i = c1; i <= c2; i++){
            a[h1][i] = F[cnt++];
        }
        h1++;
        for(int i = h1; i <= h2; i++){
            a[i][c2] = F[cnt++];
        }
        c2--;
        for(int i = c2; i >= c1; i--){
            a[h2][i] = F[cnt++];
        }
        h2--;
        for(int i = h2; i >= h1; i--){
            a[i][c1] = F[cnt++];
        }
        c1++;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}