#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++){
        int arrived, left; cin >> arrived >> left;
        v.push_back({arrived, 1});
        v.push_back({left, -1});
    }
    sort(v.begin(), v.end());
    int cnt = 0, ans = 1;
    for(int i = 0; i < v.size(); i++){
        cnt += v[i].second;
        ans = max(ans, cnt);
    }
    cout << ans;
}