#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void ptich(ll n){
    ll max = INT_MIN, res;
    int mu = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            int mu = 0;
            while(n % i == 0){
                mu++;
                n /= i;
            }
            if(mu > max){
                max = mu;
                res = i;
            }
            
        }
    }
    if(n != 1){
        if(1 > max){
            max = 1;
            res = n;
        }
    }
    cout << res << " " << max;
}

int main(){
    ll n; cin >> n;
    ptich(n);
}