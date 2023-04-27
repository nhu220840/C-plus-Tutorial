#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    set<int> se;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        se.insert(a[i]);
        mp[a[i]] = 1;
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
        se.insert(b[i]);
        if(mp[b[i]] == 1){
            mp[b[i]] = 2;
        }
    }
    set<int> res;
    for(auto it : mp){
        if(it.second == 2){
            res.insert(it.first);
        }
    }
    for(int x : se){
        if(res.find(x) == res.end()){
            cout << x << " ";
        }
    }
}
