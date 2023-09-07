#include <bits/stdc++.h>

using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int a[1005][1005];
int n, m;

void Try(int i, int j){
    a[i][j] = 0;
    for(int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];

        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1)
            Try(i1, j1);
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 1){
                cnt++;
                Try(i, j);
            }
        }
    }
    cout << cnt;
}