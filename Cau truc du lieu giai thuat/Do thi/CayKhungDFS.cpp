#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, m, s;
vector<int> adj[1001];
bool visited[1001];
int parent[1001];

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

void DFS(int s){
    visited[s] = true;

    for(int x : adj[s]){
        if(!visited[x]){
            parent[x] = s;
            cout << s << "->" << x << endl;
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