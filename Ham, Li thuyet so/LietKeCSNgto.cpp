#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void lietke(ll n){
    int c2 = 0, c3 = 0, c5 = 0, c7 = 0;
    while(n){
        int r = n % 10;
        if(r == 2) c2++;
        else if(r == 3) c3++;
        else if(r == 5) c5++;
        else if(r == 7) c7++;
        n /= 10;
    }
    if(c2 != 0) 
        cout << "2 " << c2 << endl;
    if(c3 != 0) 
        cout << "3 " << c3 << endl;
    if(c5 != 0) 
        cout << "5 " << c5 << endl;
    if(c7 != 0) 
        cout << "7 " << c7 << endl;
}

ll rev(ll n){
    ll rev = 0;
    while(n){
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

void lietke2(ll n){
    int c2 = 0, c3 = 0, c5 = 0, c7 = 0;
    ll tmp = n;
    while(n){
        int r = n % 10;
        if(r == 2) c2++;
        else if(r == 3) c3++;
        else if(r == 5) c5++;
        else if(r == 7) c7++;
        n /= 10;
    }
    while(tmp){
        int k = tmp % 10;
        if(c2 != 0 && k == 2){
            cout << "2 " << c2 << endl;
            c2 = 0;
        }
        if(c3 != 0 && k == 3){
            cout << "3 " << c3 << endl;
            c3 = 0;
        }
        if(c5 != 0 && k == 5){
            cout << "5 " << c5 << endl;
            c5 = 0;
        }
        if(c7 != 0 && k == 7){
            cout << "7 " << c7 << endl; 
            c7 = 0;
        }
        tmp /= 10;
    }
}

int main(){
    ll n; cin >> n;
    lietke(n);
    cout << endl;
    n = rev(n);
    lietke2(n);
}