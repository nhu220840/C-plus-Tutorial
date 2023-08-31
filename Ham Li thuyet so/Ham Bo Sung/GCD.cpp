#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll lcm(int a, int b){
    return a / (__gcd(a, b)) * b;
}

int main(){
    int a, b, c, d; cin >> a >> b >> c >> d;
    int uc = __gcd(__gcd(a, b), __gcd(c, d));
    ll bc = lcm(lcm(a, b), lcm(c, d));
    cout << uc << " " << bc;
}