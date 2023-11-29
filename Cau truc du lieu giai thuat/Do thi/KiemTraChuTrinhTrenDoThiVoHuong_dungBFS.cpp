#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, m;
vector<int> adj[1001];
bool visited[1001];
int parent[1001];

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

bool BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while(!q.empty()){
        int top = q.front(); q.pop();
        for(int x : adj[top]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
                parent[x] = top;
            }
            else if(x != parent[top]) return true;
        }
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            if(BFS(i)){
                cout << "1"; 
                return 0;
            }
        }
    }
    cout << "0";
}