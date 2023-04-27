#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool isPalindrome(int n){
    int rev = 0, tmp = n;
    while(n){
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return tmp == rev;
}

int main(){
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(isPalindrome(a[i][j]))
                cnt++;
        }
    }
    cout << cnt;
}
