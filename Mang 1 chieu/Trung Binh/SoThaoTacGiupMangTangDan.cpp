#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    long long ans = 0;
    long long tmp = 0;
    for(int i = 1; i < n; i++){
        if(a[i] <= a[i - 1]){
            tmp = a[i - 1] - a[i] + 1;
            ans += tmp;
            a[i] += tmp;
        }
    }
    cout << ans;
}