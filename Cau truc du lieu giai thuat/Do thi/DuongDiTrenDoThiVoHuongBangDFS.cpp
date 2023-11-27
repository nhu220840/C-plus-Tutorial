#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, m, s, t;
vector<int> adj[1001];
bool visited[1001];
vector<int> path;

void enter(){
    cin >> n >> m >> s >> t;

    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i = 1; i <= n; i++){
        sort(adj[i].begin(), adj[i].end());
    }
}

void DFS(int s){
    visited[s] = true;
    if(s == t) return;

    for(int x : adj[s]){
        if(!visited[x]){
            path.push_back(x);
            DFS(x);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    path.push_back(s);
    DFS(s);
    if(visited[t] == true){
        for(int x : path) cout << x << " ";
    }
    else cout << -1;
}