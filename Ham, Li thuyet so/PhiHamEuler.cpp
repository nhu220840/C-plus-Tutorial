#include <bits/stdc++.h>

using namespace std;

long long Euler(long long n){
    long long cnt = n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            cnt = cnt - cnt / i;
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n != 1){
        cnt = cnt - cnt / n;
    }
    return cnt;
}

int main(){
    long long n; cin >> n;
    cout << Euler(n);
}