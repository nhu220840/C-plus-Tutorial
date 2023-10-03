#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[200][200];
vector<char> step;
bool found = false;

void enter(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
}

void Try(int i, int j){
    if(i == n && j == n){
        found = true;
        for(char c : step) cout << c;
        cout << endl;
    }
    else{
        if(i < n && a[i + 1][j] == 1){
            step.push_back('D');
            Try(i + 1, j);
            step.pop_back();
        }
        if(j < n && a[i][j + 1] == 1){
            step.push_back('R');
            Try(i, j + 1);
            step.pop_back();
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);  
    enter();
    Try(1, 1);
    if(!found) cout << -1;
}