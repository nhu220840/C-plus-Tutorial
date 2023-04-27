#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a, b, k; cin >> a >> b >> k;
    long long trai, phai;
    if(k % 2 == 0){
        trai = phai = k / 2;
    }
    else{
        trai = floor(k / 2);
        phai = trai + 1;
    }
    cout << phai * a - trai * b;
}