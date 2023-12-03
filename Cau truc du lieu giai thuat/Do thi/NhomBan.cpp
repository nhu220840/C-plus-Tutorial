#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, m; 
vector<int> adj[1005];
bool visited[1005];
int cnt, max_size = INT_MIN;

void enter(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

void DFS(int u){
    visited[u] = true;
    cnt++;

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
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            cnt = 0;
            DFS(i);
            max_size = max(max_size, cnt);
        }
    }
    cout << max_size;
}