#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//Buoc Backtrack rat quan trong
//O tren ghi nhan cai gi thi o duoi phai tra lai gia tri cho no de tiep tuc backtrack

int n, X[100];
int used[100];

void Try(int i){
    for(int j = 1; j <= n; j++){
        //X1, X2,... Xi: 1
        X[i] = j;
        used[j] = 1; //Danh dau la da su dung
        if(i == n){
            for(int i = 1; i <= n; i++){
                cout << X[i];
            }
            cout << endl;
        }
        else{
            Try(i + 1);
        }
        //backtrack
        used[j] = 0; //Tra lai cac gia tri de su dung sau khi back
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    Try(1);
}