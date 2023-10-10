#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    ll sum = 0;
    priority_queue<ll, vector<ll>, greater<ll>> fee;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        fee.push(x);
    }
    while(fee.size() > 1){
        ll a = fee.top(); //lay ra 2 soi day ngan nhat sau do xoa khoi hang doi
        fee.pop();
        ll b = fee.top(); 
        fee.pop();
        ll tmp = a + b;
        sum = ((sum % MOD) + (tmp % MOD)) % MOD; //tinh tong cua 2 soi day do
        fee.push(tmp); //roi lai day vao trong hang doi
    }
    cout << sum;
}