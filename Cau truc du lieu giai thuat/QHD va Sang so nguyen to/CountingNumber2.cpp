#include <bits/stdc++.h>

using namespace std;

//Tu tuong: chi sang den 81 boi vi so lon nhat co 10^9 chu so
//          vay nen tong lon nhat co the dat dc la 9 x 9 = 81

bool is_prime[90];

void sieve(){
    for(int i = 0; i <= 81; i++){
        is_prime[i] = true;
    }
    is_prime[0] = is_prime[1] = false;
    for(int i = 2; i <= sqrt(81); i++){
        if(is_prime[i]){
            for(int j = i * i; j <= 81; j += i){
                is_prime[j] = false;
            }
        }
    }
}

int sum_of_digits(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int a, b; cin >> a >> b;
    sieve();
    int cnt = 0;
    for(int i = a; i <= b; i++){
        if(is_prime[sum_of_digits(i)])
            cnt++;
    }
    cout << cnt;
}