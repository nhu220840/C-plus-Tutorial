#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, s; cin >> n >> s;
    int a[n];
    for(int &x : a) cin >> x;
    int l = 0, r = 0;
    int minLength = INT_MAX, sum = 0;
    while(r < n){
        sum += a[r];
        while(sum >= s){
            minLength = min(minLength, r - l + 1);
            sum -= a[l];
            l++;
        }
        r++;
    }
    if(minLength == INT_MAX) cout << -1;
    else cout << minLength;
}