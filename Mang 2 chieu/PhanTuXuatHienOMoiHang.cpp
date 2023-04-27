#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    map<int, int> mp;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        mp[x] = 1;
    }
    for(int i = 2; i <= n; i++){
        map<int, int> tmp;
        for(int j = 1; j <= n; j++){
            int x; cin >> x;
            if(mp[x] == i - 1){
                tmp[x] = i;
            }
        }
        mp = tmp;
    }
    bool found = false;
    for(auto it : mp){
        if(it.second == n){
            cout << it.first << " ";
            found = true;
        }
    }
    if(!found)
        cout << "NOT FOUND";
}
