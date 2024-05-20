#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int max_length = 1e3+1;

int vertices, edges;
vector<int> adj[max_length];
int color[max_length];

void enter(){
    cin >> vertices >> edges;
    for(int i = 0; i < edges; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

bool isValid(int u, int c){
    for(int v : adj[u]){
        if(color[v] == c)
            return false;
    }
    return true;
}

int countVertices(int c){
    int cnt = 0;
    for(int i = 1; i <= vertices; i++){
        if(color[i] == 0 && isValid(i, c)){
            color[i] = c;
            cnt++;
        }
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    int res = 0, colorFill = 1;
    while(res < vertices){
        res += countVertices(colorFill);
        colorFill++;
    }
    for(int i = 1; i <= vertices; i++){
        cout << color[i] << " ";
    }
}