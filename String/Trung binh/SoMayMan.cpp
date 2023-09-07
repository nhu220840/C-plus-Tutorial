#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool luckyNumber(string s){
    while(s.length() > 1){
        int i = 0;
        ll sum = 0;
        for(char c : s){
            sum += c - '0';
        }
        s = to_string(sum);
    }
    
    return (s == "9");
}

int main(){
    string n; cin >> n;
    cout << (luckyNumber(n) ? "YES" : "NO");
}