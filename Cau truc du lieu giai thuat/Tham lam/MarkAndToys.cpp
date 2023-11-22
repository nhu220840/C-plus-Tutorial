#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int prices[n];
    for(int i = 0; i < n; i++){
        cin >> prices[i];
    }
    sort(prices, prices + n);
    int cnt = 0, target = 0;
    for(int i = 0; i < n; i++){
        if(target + prices[i] > k){
            break;
        }
        else{
            cnt++;
            target += prices[i];
        }
    }
    cout << cnt;
}