#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, used[10], X[100];

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(used[j] == 0 && abs(j - X[i - 1]) > 1){ //Neu so sau hon so truoc 2 don vi thi moi gan cau hinh
            X[i] = j;
            used[j] = 1;

            if(i == n){
                for(int i = 1; i <= n; i++){
                    cout << X[i];
                }
                cout << endl;
            }
            else{
                Try(i + 1);
            }
            
            used[j] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    X[0] = -1;
    Try(1);
}