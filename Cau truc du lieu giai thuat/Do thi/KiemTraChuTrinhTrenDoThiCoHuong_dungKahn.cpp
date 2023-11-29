#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//Chi su dung duoc neu do thi khong co chu trinh (DAG - Directed Acyclic Graph)
//Thuat toan Kahn la 1 cach sap xep khac cua topological sorting

int n, m;
vector<int> adj[1001];
bool visited[1001];
int deg[1001];
vector<int> topo;

void enter(){
    cin >> n >> m;

    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        deg[v]++;
    }

    for(int i = 1; i <= n; i++){
        sort(adj[i].begin(), adj[i].end());
    }
}

void Kahn(){
    queue<int> q;
    for(int i = 1; i <= n; i++){
        if(deg[i] == 0){
            q.push(i);
        }
    }

    while(!q.empty()){
        int top = q.front(); q.pop();
        topo.push_back(top);

        for(int x : adj[top]){
            deg[x]--;
            if(deg[x] == 0){
                q.push(x);
            }
        }
    }

    if(topo.size() < n) cout << 1;
    else cout << 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    Kahn();
}