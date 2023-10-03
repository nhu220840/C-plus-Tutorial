#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, X[100], column[100], d1[100], d2[100], cnt = 0;

//X1, X2, X3,..., Xn;
//X[i]: Di tim cach dat con hau o hang thu i nam o cot nao?
//X[i] = j: cot j, duong cheo xuoi: i - j + n, duong cheo nguoc: i + j - 1 con trong hay ko?

void Try(int i){
    //Duyet cac kha nang ma X[i] co the nhan duoc
    for(int j = 1; j <= n; j++){
        //Chuan bi X[i] = j
        if(column[j] == 0 && d1[i - j + n] == 0 && d2[i + j - 1] == 0){
            X[i] = j;
            column[j] = d1[i - j + n] = d2[i + j - 1] = 1;
            if(i == n){
                cnt++;
            }
            else{
                Try(i + 1);
            }
            column[j] = d1[i - j + n] = d2[i + j - 1] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;    
    Try(1);
    cout << cnt;
}