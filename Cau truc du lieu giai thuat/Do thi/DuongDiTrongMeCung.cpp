#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

int n;
int s, t, u, v;
int a[1005][1005];
int path = 0;

void Try(int i, int j){
    if(i == u && j == v) return;
    a[i][j] = 0;
    path++;

    for(int k = 0; k < 8; k++){
        int i1 = i + dx[k], j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == 1){
            Try(i1, j1);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> s >> t >> u >> v;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    Try(s, t);
    if(a[u][v] == 0) cout << -1;
    else{
        cout << path;
    }
}