#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[1000], X[1000];
vector<vector<int>> res;

void enter(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

// void Try(int i, int left, int right){
//     for(int j = left; j <= right; j++){
//         if(a[j] > X[i - 1]){
//             X[i] = a[j];
//             if(i >= 2){
//                 vector<int> tmp(X + 1, X + i + 1); //1 -> i : X
//                 res.push_back(tmp);
//             }
//             Try(i + 1, j + 1, n - 1);
//         }
//     }
// }

void Try(vector<int> tmp, int left, int right){
    for(int j = left; j <= right; j++){
        if(tmp.size() == 0 || a[j] > tmp.back()){
            tmp.push_back(a[j]);
            if(tmp.size() >= 2){
                res.push_back(tmp);
            }
            Try(tmp, j + 1, n - 1);
            tmp.pop_back();
        }
    }
}

bool cmp(vector<int> a, vector<int> b){
    string x = "", y = "";
    for(auto it : a) x += to_string(it);
    for(auto it : b) y += to_string(it);
    return x < y;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    vector<int> x;
    Try(x, 0, n - 1);
    sort(res.begin(), res.end(), cmp);
    for(auto it : res){
        for(int x : it){
            cout << x << " ";
        }
        cout << endl;
    }
}