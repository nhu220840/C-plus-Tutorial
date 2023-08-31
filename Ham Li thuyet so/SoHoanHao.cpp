#include <bits/stdc++.h>

using namespace std;

int nt(long long n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return n > 1;
}

int main(){
    long long n; cin >> n;
    for(int i = 2; i <= 90; i++){
        if(nt(i) && nt(pow(2, i) - 1)){
            long long x = 1ll * (pow(2, i) - 1) * pow(2, i - 1);
            if(x == n){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}