#include <bits/stdc++.h>

using namespace std;

bool not_decrese(int n){
    while(n){
        int r = n % 10;
        if(r < (n / 10) % 10)
            return false;
        n /= 10;
    }
    return true;
}

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second != b.second)
        return a.second > b.second;
    else
        return a.first < b.first;
}

int main(){
    int n;
    unordered_map<int, int> mp;
    while(cin >> n){
        if(not_decrese(n)){
            mp[n]++;
        }
    }
    vector<pair<int, int>> v(mp.begin(), mp.end());
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
}