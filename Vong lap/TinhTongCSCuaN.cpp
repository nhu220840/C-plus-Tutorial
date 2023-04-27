#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin >> n;
    if(n == 0)
        cout << "0";
    else{
        long long sum = 0;
        while(n){
            sum += n % 10;
            n /= 10;
        }
        cout << sum;
    }
}