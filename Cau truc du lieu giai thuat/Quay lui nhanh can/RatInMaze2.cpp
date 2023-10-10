#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[100][100];
bool found = false;


//DLRU: Sap xep tang dan theo thu tu tu dien
int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, -1, 1, 0};

void enter(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
}

char processingStep(int k){
    string s = "DLRU";
    return s[k];
}

void Try(int i, int j, string path){
    if(i == n && j == n){
        found = true;
        cout << path << endl;
        return;
    }
    a[i][j] = 0;
    for(int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k]; 
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == 1){
            // if(k == 0) path += "U";
            // if(k == 1) path += "L";
            // if(k == 2) path += "D";
            // if(k == 3) path += "R";
            Try(i1, j1, path + processingStep(k));

        }
    }
    a[i][j] = 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    string tmp = "";
    Try(1, 1, tmp);
    if(!found){
        cout << -1;
    }
}