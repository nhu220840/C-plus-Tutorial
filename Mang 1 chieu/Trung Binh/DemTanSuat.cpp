#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    map<int, int> mp;
    for(int x : a){
        mp[x]++;
    }
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    for(int x : a){
        if(mp[x] != 0){
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
        }
    }
}