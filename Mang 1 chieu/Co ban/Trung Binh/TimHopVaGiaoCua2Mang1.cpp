#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    vector<int> res1(n + m), res2(n + m);
    auto it1 = set_intersection(a.begin(), a.end(), b.begin(), b.end(), res1.begin());
    res1.resize(it1 - res1.begin());
    sort(res1.begin(), res1.end());
    for(int x : res1) cout << x << " ";
    cout << endl;
    set<int> se;
    for(int x : a){
        se.insert(x);
    }
    for(int x : b){
        se.insert(x);
    }
    for(int x : se){
        cout << x << " ";
    }
}