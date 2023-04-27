#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin >> n;
    long long t100 = n / 100;
    long long t20 = (n - t100 * 100) / 20;
    long long t10 = (n - t100 * 100 - t20 * 20) / 10;
    long long t5 = (n - t100 * 100 - t20 * 20 - t10 * 10) / 5;
    long long t1 = n - t100 * 100 - t20 * 20 - t10 * 10 - t5 * 5;
    cout << t100 + t20 + t10 + t5 + t1;
}