#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, m, s;
vector<int> adj[100];
queue<int> q;
bool visited[100];

void enter(){
    cin >> n >> m >> s;
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
    q.push(u);
    visited[u] = true;

    while(!q.empty()){
        int x = q.front(); q.pop();
        cout << x << " ";
        for(int y : adj[x]){
            if(!visited[y]){
                q.push(y);
                visited[y] = true;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    BFS(s);
}