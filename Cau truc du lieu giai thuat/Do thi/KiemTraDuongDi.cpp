#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<int> adj[1001];
bool visited[1001];
int cnt = 1;
int connectedComponents[1001];

void DFS(int s){
    visited[s] = true;
    connectedComponents[s] = cnt;

    for(int x : adj[s]){
        if(!visited[x]){
            DFS(x);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            DFS(i);
            cnt++;
        }
    }

    int q; cin >> q;
    while(q--){
        int s, t; cin >> s >> t;
        if(connectedComponents[s] == connectedComponents[t]) cout << 1 << endl;
        else cout << -1 << endl;
    }
}