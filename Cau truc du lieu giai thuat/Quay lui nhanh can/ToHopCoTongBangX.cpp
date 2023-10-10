#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, X, a[105], x[100];   
vector<vector<int>> res;

void enter(){
    cin >> n >> X;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
}

void Try(int i, int start, int sum){
    for(int j = start; j <= n; j++){
        x[i] = a[j];

        if(sum + a[j] == X){
            vector<int> tmp(x + 1, x + i + 1);
            res.push_back(tmp);
        }
        else if(sum + a[j] < X){
            Try(i + 1, j, sum + a[j]);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    Try(1, 1, 0);
    if(res.empty()){
        cout << -1;
        return 0;
    }
    cout << res.size() << endl;
    for(auto it : res){
        cout << "{";
        for(int i = 0; i < it.size(); i++){
            cout << it[i];
            if(i != it.size() - 1) cout << " ";
        }
        cout << "}" << endl;
    }
    return 0;
}