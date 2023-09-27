#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[1000001], final = 0;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    set<int> se;
    vector<int> res;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        se.insert(a[i]);
    }
    for(auto it : se){
        res.push_back(it);
    }
    reverse(res.begin(), res.end());
    do{
        for(int i = 0; i < res.size(); i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }while(prev_permutation(res.begin(), res.end()));
}