#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    priority_queue<ll> q;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        q.push(x);
    }
    ll sum = 0;
    while(q.size() > 1){
        ll a = q.top(); q.pop();
        ll b = q.top(); q.pop();
        ll tmp = a + b;
        sum = ((sum % MOD) + (tmp % MOD)) % MOD;
        q.push(tmp);
    }
    cout << sum;
}