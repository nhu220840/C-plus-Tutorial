#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, m;
vector<int> adj[1005];
bool visited[1005];
int symbol;

void DFS(int u){
    if(adj[u].size() > adj[symbol].size() ||
    adj[u].size() == adj[symbol].size() && u < symbol){
        symbol = u;
    }
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
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 1; i <= n; i++){
        sort(adj[i].begin(), adj[i].end());
    }

    set<int> se;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            symbol = i;
            DFS(i);
            se.insert(symbol);
        }
    }
    for(auto it : se) cout << it << " ";
}