#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    int max_fre = INT_MIN;
    int res;
    for(auto it : mp){
        if(it.second > max_fre){
            max_fre = it.second;
            res = it.first;
        }
    }
    cout << res << " " << max_fre;
}