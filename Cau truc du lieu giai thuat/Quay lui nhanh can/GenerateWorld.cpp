#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, m;
string s;
char a[100][100], used[100][100];
bool found = false;

//DLRU: Sap xep tang dan theo thu tu tu dien
int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, -1, 1, 0};

void enter(){
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }

    cin >> s;
}

void Try(int i, int j, int pos){
    //(i, j) la vi tri o tren ma tran
    //pos la vi tri cua ki tu trong xau S
    if(pos == s.length()){
        found = true;
        return;
    }

    for(int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];

        if(1 <= i1 && i1 <= n && 1 <= j1 && j1 <= m && used[i1][j1] == 0 && s[pos] == a[i1][j1]){
            used[i1][j1] = 1;
            Try(i1, j1, pos + 1);
            used[i1][j1] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] == s[0]){
                used[i][j] = 1;
                Try(i, j, 1);
                used[i][j] = 0;
            }
        }
    }
    cout << (found ? "YES" : "NO");
}