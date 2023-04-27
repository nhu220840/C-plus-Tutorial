#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    vector<int> res(n + m);
    merge(a.begin(), a.end(), b.begin(), b.end(), res.begin());
    for(int x :  res) cout << x << " ";
}