#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, s; cin >> n >> s;
    int a[n];
    for(int &x : a) cin >> x;
    int l = 0, r = 0;
    int maxLength = 0, sum = 0;
    while(r < n){
        sum += a[r];
        while(sum > s){
            sum -= a[l];
            l++;
        }
        maxLength = max(maxLength, r - l + 1);
        r++;
    }
    cout << maxLength;
}