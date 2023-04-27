#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll F[1000001];

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    set<int> se;
    for(int i = n - 1; i >= 0; i--){
        se.insert(a[i]);
        F[i] = se.size();
    }
    int q; cin >> q;
    while(q--){
        int l; cin >> l;
        cout << F[l] << endl;
    }
}