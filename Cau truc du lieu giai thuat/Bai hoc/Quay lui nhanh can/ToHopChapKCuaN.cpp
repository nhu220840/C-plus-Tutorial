#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, k, X[100];

void Try(int i){
    for(int j = X[i - 1] + 1; j <= n - k + i; j++){
        X[i] = j;
        if(i == k){
            for(int j = 1; j <= k; j++){
                cout << X[j] << " ";
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
    n = 5, k = 3;
    Try(1);
}