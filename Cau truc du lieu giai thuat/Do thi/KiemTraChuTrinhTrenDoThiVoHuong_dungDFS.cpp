#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, m;
vector<int> adj[1001];
bool visited[1001];
int parent[1001];
bool check = false;

void enter(){
    cin >> n >> m;

    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i = 1; i <= n; i++){
        sort(adj[i].begin(), adj[i].end());
    }
}

void DFS(int u){
    visited[u] = true;

    for(int x : adj[u]){
        if(!visited[x]){
            parent[x] = u;
            DFS(x);
        }
        else{
            if(x != parent[u]) check = true;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            DFS(i);
        }
    }
    cout << (check ? "1" : "0");
}