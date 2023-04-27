#include <bits/stdc++.h>

using namespace std;

int nt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return n > 1;
}

int main(){
    int n; cin >> n;
    int cnt = 0, tong = 0;
    int a[n];
    for(int &x : a){
        cin >> x;
        if(nt(x)){
            cnt++;
            tong += x;
        }
    }
    double tbc = 1.0 * tong / cnt;
    cout << fixed << setprecision(3) << tbc;
}