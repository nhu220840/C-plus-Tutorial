#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//DLRU: Sap xep tang dan theo thu tu tu dien
int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, -1, 1, 0};

int n, m;
char a[1001][1001];

void DFS(int i, int j){
    a[i][j] = '#';

    for(int k = 0; k < 4; k++){
        int i1 = i + dx[k], j1 = j + dy[k];

        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == '.'){
            DFS(i1, j1);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int cnt = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == '.'){
                DFS(i, j);
                cnt++;
            }
        }
    }
    cout << cnt;
}