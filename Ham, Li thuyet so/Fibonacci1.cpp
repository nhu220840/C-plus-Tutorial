#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void inFibo(int n){
    if(n == 1)
        cout << "1" << endl;
    else if(n == 2)
        cout << "1\n1" << endl;
    else{
        cout << "1\n1\n";
        ll fn, f1 = 1, f2 = 1;
        for(int i = 2; i < n; i++){
            fn = f1 + f2;
            cout << fn << endl;
            f2 = f1;
            f1 = fn;
        }
    }
}

int main(){
    int n; cin >> n;
    inFibo(n);
}