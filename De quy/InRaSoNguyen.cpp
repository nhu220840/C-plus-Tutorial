#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void in1(ll n){
    if(n < 10)
        cout << n << " ";
    else{
        in1(n / 10);
        cout << n % 10 << " ";
    }
}

void in2(ll n){
    if(n < 10)
        cout << n << " ";
    else{
        cout << n % 10 << " ";
        in2(n / 10);
    }
}

int main(){
    ll n; cin >> n;
    in1(n);
    cout << endl;
    in2(n);
}