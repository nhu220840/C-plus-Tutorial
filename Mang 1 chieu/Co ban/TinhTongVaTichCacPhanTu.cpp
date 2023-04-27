#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    ll sum = 0, prd = 1;
    for(int i = 0; i < n; i++){
        sum += a[i];
        sum %= MOD;
        prd *= a[i];
        prd %= MOD;
    }
    cout << sum << endl << prd;
}