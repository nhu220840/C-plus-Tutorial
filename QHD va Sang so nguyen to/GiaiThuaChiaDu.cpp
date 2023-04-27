#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int n;
ll a[1000001];

void gt(){
    a[0] = 1;
    a[1] = 1;
    for(int i = 2; i <= 1000000; i++){
        a[i] = a[i - 1] * i;
        a[i] %= MOD;
    }
}

int main(){
    int t; cin >> t;
    gt();
    while(t--){
        cin >> n;
        cout << a[n] << endl;
    }
}