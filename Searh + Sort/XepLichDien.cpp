#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}

int main(){
    int n; cin >> n;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++){
        int start, end;
        cin >> start >> end;
        v.push_back({start, end});
    }
    sort(v.begin(), v.end(), cmp);
    int cnt = 1, end_time = v[0].second;
    for(int i = 1; i < v.size(); i++){
        if(v[i].first > end_time){
            cnt++;
            end_time = v[i].second; 
        }
    }
    cout << cnt;
}