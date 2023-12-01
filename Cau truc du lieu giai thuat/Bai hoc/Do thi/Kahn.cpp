#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//Chi su dung duoc neu do thi khong co chu trinh (DAG - Directed Acyclic Graph)
//Thuat toan Kahn la 1 cach sap xep khac cua topological sorting

//Idea: 
//-tinh ban bac vao cua cac dinh 
//-Dinh nao co ban bac vao = 0 chung to la dinh bat dau
//-Khi do, day dinh do vao trong hang doi, dong thoi giam ban bac vao cua cac dinh ke voi no
//-Neu co dinh nao co ban bac vao = 0 lai day tiep vao hang doi
//-Tiep tuc nhung thao tac do cho den khi het cac dinh trong hang doi

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
        cout << top << " ";

        for(int x : adj[top]){
            deg[x]--;
            if(deg[x] == 0){
                q.push(x);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    Kahn();
}