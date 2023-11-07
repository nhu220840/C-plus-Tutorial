#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int F[300][100000];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, S; cin >> n >> S;
    int a[n + 1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 0; i <= n; i++) F[i][0] = 1;

    //input: 
    // 8 92
    // 69 16 82 170 31 24 45 112 

    //F[1][69] = F[0][0] || F[0][69] 
    //neu ko khoi tao F[0][0] = 1 thi kqua se ra 0
    
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= S; j++){
            if(j >= a[i])
                F[i][j] = F[i - 1][j] || F[i - 1][j - a[i]];
            else F[i][j] = F[i - 1][j];
        }
    }
    cout << F[n][S];
}