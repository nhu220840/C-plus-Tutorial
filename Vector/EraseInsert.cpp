#include <bits/stdc++.h>

using namespace std;

int main(){
    int m; cin >> m;
    vector<int> v;
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int k; cin >> k;
        if(k == 1){
            int pos, val; cin >> pos >> val;
            v.insert(v.begin() + pos, val);
        }
        else{
            int pos2; cin >> pos2;
            v.erase(v.begin() + pos2);
        }
    }
    for(int x : v){
        cout << x << " ";
    }
}