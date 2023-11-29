#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//Chi su dung duoc neu do thi khong co chu trinh (DAG - Directed Acyclic Graph)

int n, m;
vector<int> adj[1001];
bool visited[1001];
vector<int> topo;

void enter(){
    cin >> n >> m;

    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
    }

    for(int i = 1; i <= n; i++){
        sort(adj[i].begin(), adj[i].end());
    }
}

void DFS(int u){
    visited[u] = true;

    for(int x : adj[u]){
        if(!visited[x]){
            DFS(x);
        }
    }
    topo.push_back(u); //thang nao duyet xong dau tien se duoc day vao ngan xep
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    DFS(1);
    for(int i = topo.size() - 1; i >= 0; i--){
        cout << topo[i] << " ";
    }
}