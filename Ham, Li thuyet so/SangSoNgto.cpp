#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if(n >= 2){
        cout << 2 << " ";
    }
    for(int i = 3; i <= n; i += 2){
        bool isPrime = true;
        for(int j = 3; j * j <= i; j += 2){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout << i << " ";
        }
    }
    return 0;
}
