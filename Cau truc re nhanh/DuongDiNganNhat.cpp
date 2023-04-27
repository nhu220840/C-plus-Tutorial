#include <bits/stdc++.h>

using namespace std;

int main(){
    long long d1, d2, d3; 
    cin >> d1 >> d2 >> d3;
    long long c1 = d1 * 2 + d2 * 2;
    long long c2 = d1 + d3 + d2;
    long long c3 = d1 * 2 + d3 * 2;
    long long c4 = d2 * 2 + d3 * 2;
    cout << min({c1, c2, c3, c4});
}