#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main(){
    int a, b; cin >> a >> b;
    if(b == 0 || abs(a) > 1000 || abs(b) > 1000){
        cout << "INVALID";
        return 0;
    }
    if(a == 0){
        cout << "0";
        return 0;
    }
    if(a % b == 0){
        cout << a / b;
        return 0;
    }
    int uc = abs(gcd(a, b));   
    int tu = a / uc;
    int mau = b / uc;
    if(mau < 0){
        cout << -tu << " " << -mau;
    }
    else{
        cout << tu << " " << mau;
    }
}