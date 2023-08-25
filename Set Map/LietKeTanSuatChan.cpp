#include <bits/stdc++.h>

using namespace std;

#define ii pair<int, int>

bool cmp(ii a, ii b){
    return a.second < b.second;
}

int main(){
    int n; cin >> n;
    map<int, int> mp;
    vector<ii> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
    }
    for(auto it : mp){
        if(it.second % 2 == 0)
            v.push_back({it.first, it.second});
    }
    sort(v.begin(), v.end());
    for(ii x : v) cout << x.first << " " << x.second << endl;
    cout << endl;
    for(int i = v.size() - 1; i >= 0; i--){
        cout << v[i].first << " " << v[i].second << endl;
    }
}