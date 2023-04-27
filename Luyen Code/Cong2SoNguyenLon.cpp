#include <bits/stdc++.h>

using namespace std;

int main(){
    string a, b; cin >> a >> b;
    while(a.length() < b.length()){
        a = '0' + a;
    }
    while(a.length() > b.length()){
        b = '0' + b;
    }
    long long sum1 = 0;
    string sum = "";
    int carry = 0;
    for(int i = a.length() - 1; i >= 0; i--){
        sum1 = ((a[i] - '0') + (b[i] - '0') + carry);
        sum += (sum1 % 10 + '0');
        carry = sum1 / 10;
    }
    if(carry != 0){
        sum += (carry + '0');
    }
    for(int i = sum.size() - 1; i >= 0; i--){
        cout << sum[i];
    }
}