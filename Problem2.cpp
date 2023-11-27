#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int maxN = 1000000;
int q[1000000];
int size = 0;

int n, m, s;
string adj[100];
bool visited[100];

bool empty(){
    return size == 0;
}

void push(int x){
    if(size == maxN) return;
    q[size] = x;
    size++;
}

void pop(){
    if(size == 0) return;
    for(int i = 0; i < size - 1; i++){
        q[i] = q[i + 1];
    }
    size--;
}

int front(){
    return q[0];
}


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

void BFS(int u){
    push(u);
    visited[u] = true;

    while(!empty()){
        int x = front(); pop();
        cout << x << " ";
        for(int y : adj[x]){
            if(!visited[y]){
                push(y);
                visited[y] = true;
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