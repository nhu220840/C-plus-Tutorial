#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    ll cnt = 0;
    int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    for(int i = 0; i < 10; i++){
        cnt += n / a[i];
        n %= a[i];
    }
    cout << cnt;
}