#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define ii pair<int, int>

int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

int n;
int s, t, u, v;
int a[1005][1005], path[1005][1005];

int BFS(){
    queue<ii> q;
    q.push({s, t});
    a[s][t] = 0;
    path[s][t] = 0;

    while(!q.empty()){
        ii top = q.front(); q.pop();
        int s1 = top.first, s2 = top.second;

        if(s1 == u && s2 == v) return path[u][v];
        
        for(int k = 0; k < 8; k++){
            int i1 = s1 + dx[k], j1 = s2 + dy[k];
            if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == 1){
                q.push({i1, j1});
                a[i1][j1] = 0;
                path[i1][j1] = path[s1][s2] + 1;
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