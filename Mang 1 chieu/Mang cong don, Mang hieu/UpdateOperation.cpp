#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// case: l = 1, r = 5, k = 1

// a : 8 5 8 9 7 6 9 

// D : 8 -3 3 1 -2 -1 3  

// D1: 8 -2 3 1 -2 -1 2 
// D[1] += 1
// D[6] -= 1

// a1: 8 6 9 10 8 7 9

int main(){
    int n, q; cin >> n >> q;
    int a[n];
    for(int &x : a) cin >> x;
    int D[n];
    for(int i = 0; i < n; i++){
        if(i == 0) D[i] = a[i];
        else D[i] = a[i] - a[i - 1];
    }
    while(q--){
        int l, r, k; cin >> l >> r >> k;
        D[l] += k;
        D[r + 1] -= k;

    }
    
    ll sum = 0;
    for(int i = 0; i < n; i++){
        sum += D[i];
        cout << sum << " ";
    }
}