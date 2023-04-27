#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, m; cin >> n >> m;
    long long max = n, min;
    if(n % 2 == 0)
        min = n / 2;
    else    
        min = n / 2 + 1;
    long long kq = (min + m - 1) / m * m;
    if(kq <= max)
        cout << kq;
    else   
        cout << "-1";
}