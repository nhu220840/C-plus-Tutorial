#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    int l, r; cin >> l >> r;
    for(auto it = v.begin() + l; it != v.begin() + r + 1; it++){
        cout << *it << " ";
    }
    cout << endl;
    for(auto it = v.begin() + r; it != v.begin() + l - 1; it--){
        cout << *it << " ";
    }
}