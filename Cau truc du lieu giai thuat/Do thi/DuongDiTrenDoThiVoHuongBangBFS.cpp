#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, m, s, t;
vector<int> adj[1001];
bool visited[1001];
int parent[1001];

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

void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while(!q.empty()){
        int top = q.front(); q.pop();
        for(int v : adj[top]){
            if(!visited[v]){
                q.push(v);
                visited[v] = true;
                parent[v] = top;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    BFS(s);
    if(!visited[t]) cout << -1;
    else{
        vector<int> path;

        while(t != s){
            path.push_back(t);
            t = parent[t];
        }
        path.push_back(s);
        reverse(path.begin(), path.end());

        for(int x : path) cout << x << " ";
    }
}