#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define pii pair<int, int>

bool cmp(pii a, pii b){
    if(a.second != b.second)
        return a.second < b.second;
    return a.first < b.first;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    pii action[n];
    for(int i = 0; i < n; i++){
        cin >> action[i].first >> action[i].second;
    }
    sort(action, action + n, cmp);
    int cnt = 1, end = action[0].second;
    for(int i = 1; i < n; i++){
        if(action[i].first > end){
            end = action[i].second;
            cnt++;
        }
    }
    cout << cnt;
}