#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int check(ll n){
    if(n < 10){
        if(n % 2 != 0)
            return 0;
        else
            return 1;
    }
    int r = n % 10;
    if(r % 2 == 0)
        return check(n / 10);
    else
        return 0;
}

int main(){
    ll n; cin >> n;
    if(check(n))
        cout << "YES";
    else
        cout << "NO";
}