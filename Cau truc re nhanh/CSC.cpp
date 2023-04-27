#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, u1, d; cin >> n >> u1 >> d;
    long long un = u1 + d*(n - 1);
    long long tong = (u1 + un) * n / 2;
    cout << tong;
}