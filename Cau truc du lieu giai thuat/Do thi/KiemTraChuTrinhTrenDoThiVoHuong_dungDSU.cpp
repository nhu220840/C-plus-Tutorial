#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, m;
int parent[1001], sz[1001];

//Khoi tao dai dien cho tung node tren do thi
void init(){
    for(int i = 1; i <= n; i++){
        parent[i] = i;
        sz[i] = 1;
    }
}

//Tim dai dien cho tung node
//Toi uu bang cach nen duong di
int Find(int u){
    if(u == parent[u])
        return u;
    int x = Find(parent[u]);
    parent[u] = x;
    return x;
}

//Gop 2 dinh lai voi nhau va cho no chung 1 dai dien
//Toi uu bang cach tim xem giua 2 thanh phan, cai nao co sz lon hon thi 
//se lay dai dien cua thanh phan co sz lon hon
bool Union(int u, int v){
    u = Find(u); //Tim dai dien cho u
    v = Find(v); //Tim dai dien cho v
    if(u == v) return false; //Neu u == v chung to u va v cung thuoc 1 thanh phan lien thong
    // => Khong the gop duoc
    if(sz[u] < sz[v]){
        parent[u] = v;
        sz[v] += sz[u];
    }
    else{
        parent[v] = u;
        sz[u] += sz[v];
    }
    return true; //Co the gop lai voi nhau thanh 1 thanh phan lien thong
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    init();
    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        if(Union(u, v) == false){
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}