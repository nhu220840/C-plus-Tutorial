#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int nt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return n > 1;
}

int sum(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int checkFibo(int n){
    if(n == 0 || n == 1)
        return 1;
    else{
        ll fn, f1 = 1, f2 = 0;
        for(int i = 2; i <= 92; i++){
            fn = f1 + f2;
            if(fn == n)
                return 1;
            f2 = f1;
            f1 = fn;
        }
        return 0;
    }
}

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        if(checkFibo(sum(i)) && nt(i))
            cout << i << " ";
    }
}