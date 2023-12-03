#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define ii pair<int, int>

int dx[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
int dy[8] = {-1, 1, 2, 2, 1, -1, -2, -2};

int n;
int s, t, u, v;
int a[1005][1005];
int path[1005][1005];

int BFS(){
    queue<ii> q;
    q.push({s, t});
    a[s][t] = 0;
    path[s][t] = 0;

    while(!q.empty()){
        ii top = q.front(); q.pop();
        int i = top.first, j = top.second;

        if(i == u && j == v) return path[i][j];

        for(int k = 0; k < 8; k++){
            int i1 = i + dx[k], j1 = j + dy[k];
            if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == 1){
                q.push({i1, j1});
                a[i1][j1] = 0;
                path[i1][j1] = path[i][j] + 1;
            }
        }
    }
    return -1;
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

    cout << BFS();
}