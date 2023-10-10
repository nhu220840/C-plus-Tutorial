#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[105][105], column[105], d1[105], d2[105];

void enter(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
}

void printMaze(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 1) cout << "Q";
            else cout << ".";
        }
        cout << endl;
    }
    cout << endl;
}

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(column[j] == 0 && d1[i - j + n] == 0 && d2[i + j - 1] == 0){
            a[i][j] = 1;
            column[j] = d1[i - j + n] = d2[i + j - 1] = 1;

            if(i == n){
                printMaze();
            }
            else{
                Try(i + 1);
            }

            column[j] = d1[i - j + n] = d2[i + j - 1] = 0;
            a[i][j] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    Try(1);
}