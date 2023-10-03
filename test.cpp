#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[100][100];
vector<string> step;
bool found = false;
string tmp = "";


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
        step.push_back(tmp);
        return;
    }
    if(i < n && a[i + 1][j] == 1){
        a[i + 1][j] = 0;
        tmp += "D";
        Try(i + 1, j);
        tmp.pop_back();
        a[i + 1][j] = 1;            
    }
    if(j < n && a[i][j + 1] == 1){
        a[i][j + 1] = 0;
        tmp += "R";
        Try(i, j + 1);
        tmp.pop_back();
        a[i][j + 1] = 1;
    }
    if(i > 1 && a[i - 1][j] == 1){
        a[i - 1][j] = 0;
        tmp += "U";
        Try(i - 1, j);
        tmp.pop_back();
        a[i - 1][j] = 1;
    }
    if(j > 1 && a[i][j - 1] == 1){
        a[i][j - 1] = 0;
        tmp += "L";
        Try(i, j - 1);
        tmp.pop_back();
        a[i][j - 1] = 1;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    Try(1, 1);
    sort(step.begin(), step.end());
    if(!found){
        cout << -1;
        return 0;
    }
    else{
        for(string x : step){
            cout << x << endl;
        }
        return 0;
    }
}