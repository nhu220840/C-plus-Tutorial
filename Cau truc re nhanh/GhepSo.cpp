#include <bits/stdc++.h>

using namespace std;

int main(){
    long long k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;
    long long s256 = min({k2, k5, k6});
    long long s32 = min({k3, k2 - s256});
    long long tong = s256 * 256 + s32 * 32;
    cout << tong;
}