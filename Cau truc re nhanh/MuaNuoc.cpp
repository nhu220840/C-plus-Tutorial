#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, a, b; cin >> n >> a >> b;
    if(2 * a >= b){
        if(n % 2 == 0)
            cout << n / 2 * b;
        else    
            cout << n / 2 * b + a;
    } 
    else{
        cout << n * a;
    }
}