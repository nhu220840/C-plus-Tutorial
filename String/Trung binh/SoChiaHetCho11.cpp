#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll sum_odd(string s){
    ll sum = 0;
    for(int i = 0; i < s.length(); i++){
        if(i % 2 == 0)
            sum += s[i] - '0';
    }
    return sum;
}

ll sum_even(string s){
    ll sum = 0;
    for(int i = 0; i < s.length(); i++){
        if(i % 2 != 0)
            sum += s[i] - '0';
    }
    return sum;
}

bool checkDivisible(ll a, ll b){
    ll dis = abs(a - b);
    if(dis % 11 == 0)
        return true;
    else
        return false;
}

int main(){
    string s; cin >> s;
    if(checkDivisible(sum_odd(s), sum_even(s)))
        cout << "YES";
    else
        cout << "NO";
}