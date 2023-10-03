#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[100][100], visited[100][100];
vector<string> step;
string path = "";

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

void enter(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
}

void Try(int i, int j){
    a[i][j] = 0;
    for(int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k]; 
        if(i1 <= n && j1 <= n && a[i1][j1] == 1){
            if(k == 0) path += "U";
            if(k == 1) path += "L";
            if(k == 2) path += "D";
            if(k == 3) path += "R";
            if(i1 == n && j1 == n){
                step.push_back(path);
            }
            else{
                Try(i1, j1);
            }

            path.pop_back();
            a[i1][j1] = 1;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    Try(1, 1);
    if(step.empty()){
        cout << -1;
    }
    else{
        sort(step.begin(), step.end());
        for(string x : step){
            cout << x << endl;
        }
        return 0;
    }
}