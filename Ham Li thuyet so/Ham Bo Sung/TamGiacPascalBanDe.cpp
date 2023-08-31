#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int C(int n, int k){
    ll res = 1;
    for(int i = 1; i <= k; i++){
        res *= n - i + 1;
        res /= i;
    }
    return res;
}

void pascal(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << C(i, j) << " ";
        }
        cout << endl;
    }
}
int main(){
    int n; cin >> n;
    pascal(n);
}