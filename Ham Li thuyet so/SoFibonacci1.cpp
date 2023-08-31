#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

void inFibo(int n){
    if(n == 1)
        cout << "0" << endl;
    else if(n == 2) 
        cout << "1" << endl;
    else{
        long long fn, f1 = 1, f2 = 0;
        for(int i = 3; i <= n; i++){
            fn = (f1 + f2) % MOD;
            f2 = f1;
            f1 = fn;
        }
        cout << fn;
    }
}

int main(){
    int n; cin >> n;
    inFibo(n);
}