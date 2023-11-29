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

void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while(!q.empty()){
        int top = q.front(); q.pop();
        cout << top << " ";
        for(int x : adj[top]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
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