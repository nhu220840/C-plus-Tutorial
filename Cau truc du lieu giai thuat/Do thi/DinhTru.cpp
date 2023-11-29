#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, m;
vector<int> adj[1001];
bool visited[1001];

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

void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while(!q.empty()){
        int top = q.front(); q.pop();
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
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            cnt++;
            BFS(i);
        }
    }

    int articulationPoint = 0;
    for(int i = 1; i <= n; i++){
        memset(visited, 0, sizeof(visited));
        visited[i] = true; //xoa dinh ra khoi do thi
        
        int new_cnt = 0;
        for(int j = 1; j <= n; j++){
            if(!visited[j]){
                new_cnt++;
                BFS(j);
            }
        }
        if(new_cnt > cnt) articulationPoint++;
    }

    cout << articulationPoint;
}