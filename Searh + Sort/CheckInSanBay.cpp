#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.first < b.first;
}

int main(){
    int n; cin >> n;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++){
        int arrived, end; cin >> arrived >> end;
        v.push_back({arrived, end});
    }
    sort(v.begin(), v.end(), cmp);
    long long totalTime = v[0].first + v[0].second;
    for(int i = 1; i < v.size(); i++){
        if(totalTime <= v[i].first)
            totalTime = v[i].first + v[i].second;
        else
            totalTime += v[i].second;
    }
    cout << totalTime;
}