#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, s; cin >> n >> s;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++){
        int xi, yi; cin >> xi >> yi;
        v.push_back({xi, yi});
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        if(s >= v[i].first){
            s += v[i].second;
        }
        else{
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}