#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//3 4 4 5 14 17 20

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    ll cnt = 0, totalTime = 0;
    for(int i = 0; i < n; i++){
        if(totalTime <= a[i]){
            cnt++;
            totalTime += a[i];  
        }
    }
    cout << cnt;
}