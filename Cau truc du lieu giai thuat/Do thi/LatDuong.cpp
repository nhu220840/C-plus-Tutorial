#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, m;
int parent[100005], sz[100005];
int max_size = INT_MIN;

void init(){
    for(int i = 1; i <= n; i++){
        parent[i] = i;
        sz[i] = 1;
    }
}

int Find(int u){
    if(u == parent[u]) return u;
    int x = Find(parent[u]);
    parent[u] = x;
    return x;
}

int Union(int u, int v){
    u = Find(u);
    v = Find(v);

    if(u == v) return 0;

    if(sz[u] < sz[v]){
        parent[u] = v;
        sz[v] += sz[u];
        max_size = max(max_size, sz[v]);
    }
    else{
        parent[v] = u;
        sz[u] += sz[v];
        max_size = max(max_size, sz[u]);
    }
    return 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;

    int cnt = n;
    init();
    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        cnt -= Union(u, v);
        cout << cnt << " " << max_size << endl;
    }
}