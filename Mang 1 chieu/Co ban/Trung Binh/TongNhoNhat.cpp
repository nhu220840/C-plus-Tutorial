#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    long long number1 = 0, number2 = 0;
    for(int i = 0; i < n; i += 2){
        number1 = number1 * 10 + a[i];
    }
    for(int i = 1; i < n; i += 2){
        number2 = number2 * 10 + a[i];
    }
    cout << number1 + number2;
}