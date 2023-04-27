#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin >> n;
    long long nam = n / 365;
    long long tuan = (n - nam * 365) / 7;
    long long ngay = n - nam * 365 - tuan * 7;
    cout << nam << " " << tuan << " " << ngay;
}