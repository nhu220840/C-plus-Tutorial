#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int nt(ll n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return n > 1;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    for(int i = 0; i < n; i++){
        int trai = 0, phai = 0;
        for(int j = 0; j < i; j++){
            trai += a[j];
        }
        for(int j = i + 1; j < n; j++){
            phai += a[j];
        }
        if(nt(trai) && nt(phai))
            cout << i << " ";
    }
}