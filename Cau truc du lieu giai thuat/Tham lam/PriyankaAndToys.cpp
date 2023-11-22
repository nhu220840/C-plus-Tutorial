#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int w[n];
    for(int &x : w) cin >> x;
    sort(w, w + n);
    int cnt = 1, target = w[0], total_weight = 0;
    for(int i = 0; i < n; i++){
        if(w[i] > target + 4){
            cnt++;
            target = w[i];
        }
    }
    cout << cnt;
}