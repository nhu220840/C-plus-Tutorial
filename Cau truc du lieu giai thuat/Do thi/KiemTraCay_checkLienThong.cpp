#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, m; 
vector<int> adj[1001];
bool visited[1001];
int cnt = 0;

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
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    DFS(1);
    if(m == n - 1 && cnt == n) cout << 1; //check n - 1 canh va do thi lien thong
    else cout << 0;
}