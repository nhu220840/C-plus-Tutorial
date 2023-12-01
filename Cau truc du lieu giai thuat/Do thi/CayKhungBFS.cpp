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

void BFS(int s){
    queue<int> q;
    q.push(s);
    visited[s] = true;

    while(!q.empty()){
        int top = q.front(); q.pop();
        for(int x : adj[top]){
            if(!visited[x]){
                q.push(x);
                parent[x] = top;
                cout << top << "->" << x << endl;
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