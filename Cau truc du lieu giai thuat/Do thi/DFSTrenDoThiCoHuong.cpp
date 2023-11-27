#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, m, s;
vector<int> adj[1001];
bool visited[1001];

void enter(){
    cin >> n >> m >> s;

    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
    }

    for(int i = 1; i <= n; i++){
        sort(adj[i].begin(), adj[i].end());
    }
}

void DFS(int u){
    cout << u << " ";
    visited[u] = true;

    for(int x : adj[u]){
        if(!visited[x]){
            DFS(x);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    DFS(s);
}