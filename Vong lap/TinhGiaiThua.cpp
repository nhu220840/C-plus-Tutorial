#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    long long gt = 1;
    for(int i = 1; i <= n; i++){
        gt *= 1ll * i;
    }
    cout << gt;
}