#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll gcd(ll a, ll b){
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

ll lcm(ll a, ll b){
    return a / gcd(a, b) * b;
}

int main(){
    int x, y, z, n; cin >> x >> y >> z >> n;
    int check = 0;
    ll bc = lcm(lcm(x, y), z);
    ll a = pow(10, n - 1);
    ll kq = (a + bc - 1) / bc * bc;
    if(kq <= pow(10, n)){
        cout << kq;
        check = 1;
    }
    if(check == 0)
        cout << "-1";
}