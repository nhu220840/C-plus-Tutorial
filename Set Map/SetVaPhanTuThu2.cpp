#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    set<int> se;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        se.insert(x);
    }
    cout << se.size() << endl;
    vector<int> v;
    for(int x : se){
        v.push_back(x);
    }
    cout << v.back() << " " << v.front() << endl;
    cout << v[v.size() - 2] << " " << v[1] << endl;
}