#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//Kruskal la thuat toan de tim cay khung cuc tieu (Minimum spanning tree)
//Minimum spanning tree: la mot do thi vo huong ko co chu trinh co the ket noi tat ca cac dinh tren do thi voi nhau

//Idea cua thuat toan kruskal:
//- sort dsanh canh cua do thi theo trong so tang dan
//- dua tung canh vao cay khung, chon cac canh co trong so tu nho den lon
//- neu co n dinh thi chi can n - 1 canh de lien ket tat ca cac dinh tren do thi
//- noi cac dinh voi nhau bao gio du n - 1 canh thi break

struct edge{
    int v1, v2, w;
};

int n, m;
int parent[100005], sz[100005];
vector<edge> listOfEdges;

void init(){
    for(int i = 0; i < n; i++){
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
    }
    else{
        parent[v] = u;
        sz[u] += sz[v];
    }
    return 1;
}

bool cmp(edge a, edge b){
    return a.w < b.w;
}


void Kruskal(){
    //B1: sap xep dsach canh theo trong so tang dan
    sort(listOfEdges.begin(), listOfEdges.end(), cmp);
    //B2: duyet tung canh va dua vao cay khung
    vector<edge> tree;
    ll totalWeight = 0;
    for(int i = 0; i < m; i++){
        if(tree.size() == n - 1) break;

        edge e = listOfEdges[i];
        if(Union(e.v1, e.v2)){
            totalWeight += e.w;
            tree.push_back(e);
        }
    }
    if(tree.size() == n - 1) cout << totalWeight;
    else cout << "IMPOSSIBLE";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    init();
    for(int i = 0; i < m; i++){
        int x, y, w; cin >> x >> y >> w;
        edge e = {x, y, w};
        listOfEdges.push_back(e);
    }
    Kruskal();
}