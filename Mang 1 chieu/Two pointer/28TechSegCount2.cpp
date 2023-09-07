#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, s; cin >> n >> s;
    int a[n];
    for(int &x : a) cin >> x;
    int l = 0;
    ll cnt = 0, sum = 0;
    for(int r = 0; r < n; r++){
        sum += a[r];
        while(sum >= s){
            cnt += (n - r);
            sum -= a[l];
            l++;
        }
    }
    cout << cnt;
}