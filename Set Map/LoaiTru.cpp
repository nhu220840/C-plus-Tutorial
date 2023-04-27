#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    set<int> se1, se2;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        se1.insert(a[i]);
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
        se2.insert(b[i]);
    }
    for(int x : se1){
        if(se2.find(x) == se2.end()){
            cout << x << " ";
        }
    }
}
