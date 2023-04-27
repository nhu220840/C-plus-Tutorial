#include <bits/stdc++.h>

using namespace std;

int main(){
    int a1, a2, a3, b1, b2, b3, n;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
    int cup = a1 + a2 + a3;
    int hc = b1 + b2 + b3;
    int tong = 0;
    if(cup % 5 == 0){
        tong += cup / 5;
    }
    else{
        tong += (cup / 5 + 1);
    }
    if(hc % 10 == 0){
        tong += hc / 10;
    }
    else{
        tong += (hc / 10 + 1);
    }
    if(tong <= n)
        cout << "YES" << endl;
    else   
        cout << "NO" << endl;
}