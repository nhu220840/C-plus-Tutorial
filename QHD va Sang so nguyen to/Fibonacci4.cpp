#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll F[100];

int isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return n > 1;
}

int sum_digit(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void Fibo(){
    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i <= 92; i++){
        F[i] = F[i - 1] + F[i - 2];
    } 
}

int sumFibo(ll n){
    for(int i = 0; i <= 92; i++){
        if(F[i] == n)
            return 1;
    }
    return 0;
}

int main(){
    ll n; cin >> n;
    Fibo();
    for(int i = 1; i <= n; i++){
        if(isPrime(i) && sumFibo(sum_digit(i)))
            cout << i << " ";
    }
}