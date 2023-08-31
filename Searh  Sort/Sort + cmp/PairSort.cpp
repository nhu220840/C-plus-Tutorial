#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    double kc1 = sqrt(pow(a.first, 2) + pow(a.second, 2));
    double kc2 = sqrt(pow(b.first, 2) + pow(b.second, 2));
    if(kc1 != kc2)
        return kc1 < kc2;
    else{
        if(a.first == b.first)
            return a.second < b.second;
        else
            return a.first < b.first;
    }
    
}

int main(){
    int n; cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it : v){
        cout << it.first <<  " " << it.second << endl;
    }
}