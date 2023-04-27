#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll T[1000001];

void Tribo(){
    T[0] = 0;
    T[1] = 0;
    T[2] = 1;
    for(int i = 3; i <= 1000000; i++){
        T[i] = T[i - 1] + T[i - 2] + T[i - 3];
        T[i] %= MOD;
    }
}

int main(){
    int t; cin >> t;
    Tribo();
    while(t--){
        int n; cin >> n;
        cout << T[n] << endl;
    }
}