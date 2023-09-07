#include <bits/stdc++.h>

using namespace std;

int sugar[10005];
int cup[10005];

int main(){
    int n, k, q; cin >> n >> k >> q;
    for(int i = 0; i < n; i++){
        int l, r; cin >> l >> r;
        sugar[l]++;
        sugar[r + 1]--;
    }
    for(int i = 1; i <= 10000; i++){
        sugar[i] += sugar[i - 1];
    }
    
    for(int i = 1; i <= 10000; i++){
        cup[i] = cup[i - 1] + (sugar[i] >= k ? 1 : 0);
    }
    while(q--){
        int l, r; cin >> l >> r;
        int cnt = cup[r] - cup[l - 1];
        cout << cnt << endl;
    }
}
