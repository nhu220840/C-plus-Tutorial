#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b){
    if(a.first != b.first)
        return a.first < b.first;
    else{
        if(a.second.first != b.second.first)
            return a.second.first < b.second.first;
        else
            return a.second.second < b.second.second;
    }
}

int main(){
    int n; cin >> n;
    vector<pair<int, pair<int, int>>> v;
    for(int i = 0; i < n; i++){
        int x, y, z; cin >> x >> y >> z;
        v.push_back({x, {y, z}});
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it : v){
        cout << it.first << " " << it.second.first << " " << it.second.second << endl;
    }
}