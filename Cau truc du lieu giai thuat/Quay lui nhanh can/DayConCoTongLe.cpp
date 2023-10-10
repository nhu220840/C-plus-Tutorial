#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[1000], X[1000];
vector<vector<int>> res;

void enter(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
}

void Try(int i, int start, int sum){
    for(int j = start; j <= n; j++){
        X[i] = a[j];
        sum += a[j];
        if(sum % 2 == 1){
            vector<int> tmp(X + 1, X + i + 1); 
            res.push_back(tmp);
        }
        Try(i + 1, j + 1, sum);
        sum -= a[j];
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    Try(1, 1, 0);
    if(res.empty()) cout << "NOT FOUND";
    else{
        sort(res.begin(), res.end());
        for(auto it : res){
            for(int x : it){
                cout << x << " ";
            }
            cout << endl;
        }
    }
}