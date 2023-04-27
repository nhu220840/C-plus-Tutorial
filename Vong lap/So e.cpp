#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    double sum = 1;
    long long gt = 1;
    for(int i = 1; i <= n; i++){
        gt *= i;
        sum += 1.0/gt;
    }
    cout << fixed << setprecision(2) << sum;