#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    int uc = 0;
    for(int i = 0; i < n; i++){
        uc = __gcd(uc, a[i]);
    }
    cout << uc;
}