#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> v;
    int n; cin >> n;
    for(int i = 1; i < (1 << n); i++){//bo cau hinh toan so 0 do ko xet tap rong
        vector<int> res;
        for(int j = 0; j < n; j++){
            if(i & (1 << j)){
                res.push_back(j + 1);
            }
        }
        v.push_back(res);
    }
    sort(v.begin(), v.end());
    for(vector<int> x : v){
        for(int y : x){
            cout << y << " ";
        }
        cout << endl;
    }
}