#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//Idea: de kiem tra cay chi can ktra 2 trong cac dieu kien sau:
//1. Neu co n dinh thi se co n - 1 canh
//2. La do thi lien thong
//3. Khong co chu trinh
//4. Chi co 1 duong di duy nhat den 1 dinh (he qua cua dieu kien 3)

int m, n; 
vector<int> adj[1001];
bool visited[1001];
int parent[1001];
bool check = true;

void enter(){
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

void DFS(int u){
    if(check == false) return;
    visited[u] = true;

    for(int x : adj[u]){
        if(!visited[x]){
            parent[x] = u;
            DFS(x);
        }
        else{
            if(x != parent[u]){
                check = false; //do thi co chu trinh
                return;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    DFS(1); //Cac dinh duoc danh so tu 1 toi n nen cho DFS tu dinh dau tien
    if(m == n - 1 && check == true) cout << 1; //check do thi ko co chu trinh va co n - 1 canh
    else cout << 0;
}