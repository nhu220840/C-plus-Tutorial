#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//Xay dung X[i], gan X[i] 1 gia tri

// void Try(int i){
//     for(int j = <kha nang 1>; j < <kha nang 2>; j++){
//         X[i] = j;
//         if(i == n){ //Da xet den phan tu cuoi cung
//             in kq();
//         }
//         else{
//             Try(i + 1);
//         }
//     }
// }

//Sinh xau nhi phan bang Back Tracking
int n, X[100];

void Try(int i){
    for(int j = 0; j <= 1; j++){
        X[i] = j;
        if(i == n){
            for(int k = 1; k <= n; k++){
                cout << X[k] << " ";
            }
            cout << endl;
        }
        else{
            Try(i + 1);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
}