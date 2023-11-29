#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, m; 
vector<int> adj[1001];
bool visited[1001];
vector<pair<int, int>> edges;

void enter(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        edges.push_back({u, v});
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i = 1; i <= n; i++){
        sort(adj[i].begin(), adj[i].end());
    }
}

void DFS(int u, int s, int t){
    visited[u] = true;

    for(int x : adj[u]){
        if((u == s && x == t) || (u == t && x == s))
            continue;
        if(!visited[x]){
            DFS(x, s, t);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            cnt++;
            DFS(i, 0, 0);
        }
    }


    int bridges = 0;
    for(auto it : edges){
        int x = it.first, y = it.second;
        memset(visited, 0, sizeof(visited));
        
        int new_cnt = 0;
        for(int i = 1; i <= n; i++){
            if(!visited[i]){
                new_cnt++;
                DFS(i, x, y);
            }
        }

        if(new_cnt > cnt) bridges++;
    }
    cout << bridges;
}