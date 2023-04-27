#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin >> n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            int mu = 0;
            while(n % i == 0){
                mu++;
                n /= i;
            }
            cout << i << "^" << mu;
            if(n != 1)
                cout << " * ";
        }
    }
    if(n != 1)
        cout << n << "^1";
}