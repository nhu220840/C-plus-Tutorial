#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    long long tong = 0;
    for(int i = 0; i <= n; i += 3){
        tong += i;
    }
    cout << tong;
}