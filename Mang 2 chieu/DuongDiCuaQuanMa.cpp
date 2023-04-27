#include <bits/stdc++.h>

using namespace std;

int dx[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
int dy[8] = {-1, 1, 2, 2, 1, -1, -2, -2};

int n;
int a[105][105];

void loang(int i, int j){
    a[i][j] = 0;
    for(int k = 0; k < 8; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < n && a[i1][j1] == 1)
            loang(i1, j1);
    }
}

int main(){
    cin >> n;
    int s, t, u, v; cin >> s >> t >> u >> v;
    s--; t--; u--; v--;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    loang(s, t);
    if(a[u][v] == 0)
        cout << "YES";
    else    
        cout << "NO";
}