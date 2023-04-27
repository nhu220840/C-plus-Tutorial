#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin >> n;
    long long tong = 0;
    long long gt = 1;
    for(int i = 1; i <= n; i++){
        gt *= i;
        tong += gt;
    }
    cout << tong;
}
