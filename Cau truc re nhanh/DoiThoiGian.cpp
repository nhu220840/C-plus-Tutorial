#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin >> n;
    long long gio = n / 3600;
    long long phut = (n - gio * 3600) / 60;
    long long giay = n - gio * 3600 - phut * 60;
    cout << gio << "h" << " : " << phut << "m" << " : " << giay << "s";
}