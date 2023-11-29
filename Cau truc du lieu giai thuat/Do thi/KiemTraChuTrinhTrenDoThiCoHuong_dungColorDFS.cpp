#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define WHITE 0
#define GREY 1
#define BLACK 2

int n, m;
vector<int> adj[1001];
int color[1001];
int parent[1001];
int check = false;

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
    color[u] = GREY;

    for(int x : adj[u]){
        if(color[x] == WHITE){
            DFS(x);
        }
        else{
            if(color[x] == GREY) check = true;
        }
    }
    color[u] = BLACK;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    for(int i = 1; i <= n; i++){
        if(!color[i]){ //color[i] != BLACK
            DFS(i);
        }
    }
    cout << (check ? "1" : "0");
}