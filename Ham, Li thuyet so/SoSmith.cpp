#include <bits/stdc++.h>

using namespace std;

int nt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return n > 1;
}

int tongcs(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int tongtsnt(int n){
    int sum2 = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                sum2 += tongcs(i);
                n /= i;
            }
        }
    }
    if(n != 1)
        sum2 += tongcs(n);
    return sum2;
}

int main(){
    int n; cin >> n;
    if(tongtsnt(n) == tongcs(n) && nt(n) == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}