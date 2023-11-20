#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//Cac truong hop co the xay ra
// (4)
// (3) + (1)
// (2) + (2)
// (1) + (1) + (1) + (1)

//Neu co 10 nhom 4 thi so xe se = so nhom

//Neu co 10 (3) va 8 (1) => xe = so nhom 3
//Neu co 10 (1) va 8 (3) => xe = so nhom 3; nhom 1 con lai = nhom 3 - xe

//Neu co 10 (2) => xe = nhom2 / 2
//Neu co 11 (2) => xe = nhom2 / 2, nhom 2 con lai = 1 (sl nhom 2 chi co the la 0 hoac 1)

//So luong xe con lai 
//1 (2) va 1 (1) => 1 xe
//1 (2) va 2 (1) => 1 xe
//1 (2) va 5 (2) => 1 xe, du 3 nhom 1

//So xe con lai cho tat ca nhom 1 con du sau khi chia xe

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int d[5] = {0};
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        d[x]++;
    }

    int res4 = d[4];

    int res31 = d[3];
    if(d[3] >= d[1]){
        d[1] = 0;
    }
    else{
        d[1] = d[1] - d[3];
    }

    int res22 = d[2] / 2;
    d[2] = d[2] % 2;

    int res21 = 0;
    if(d[2] > 0){
        res21 = 1;
        if(d[1] <= 2) d[1] = 0;
        else d[1] -= 2;
    }

    int res11 = ceil(1.0 * d[1] / 4);
    cout << res4 + res31 + res22 + res21 + res11;
}