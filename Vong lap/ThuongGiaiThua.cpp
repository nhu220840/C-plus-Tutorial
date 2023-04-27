#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    long long gt = 1;
    double tong = 1;
    for(int i = 1; i < n; i++){
        gt *= i;
        tong += 1.0/gt;
    }
    cout << fixed << setprecision(4) << tong;
}
