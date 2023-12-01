#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, m;
int parent[1001], sz[1001];
vector<pair<int, int>> cities;

void init(){
    for(int i = 1; i <= n; i++){
        parent[i] = i;
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
    }
    else{
        parent[v] = u;
        sz[u] += sz[v];
    }
    return 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    init();
    int cnt = n;
    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        cities.push_back({u, v});
    }
    sort(cities.begin(), cities.end());
    for(auto it : cities)
        cout << it.first << " " << it.second << endl;
}  