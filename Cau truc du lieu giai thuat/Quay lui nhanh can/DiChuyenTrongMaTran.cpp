#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int m, n, a[105][105], visited[105];
int cnt = 0;

void enter(){
    cin >> m >> n;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
}

void Try(int i, int j){
    visited[a[i][j]] = 1;

    if(j == n && i == m){
        cnt++;
    }
    else{
        if(j < n){
            Try(i, j + 1);
        }
        if(i < m){
            Try(i + 1, j);
        }
    }

    visited[a[i][j]] = 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    Try(1, 1);
    cout << cnt;
}