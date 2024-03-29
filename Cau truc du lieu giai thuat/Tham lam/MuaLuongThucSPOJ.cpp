#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, s, m; cin >> n >> s >> m;
    ll total = 1ll * s * m; //tong so luong thuc an
    int sunday = s / 7;
    int left_day = s - sunday; //so ngay di cho toi dá
    if(total > left_day * n) cout << -1;
    else{
        int days = ceil(1.0 * total / n);
        cout << days;
    }
}