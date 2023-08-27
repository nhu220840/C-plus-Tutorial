#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll sum(string s){
    ll sum = 0;
    for(int i = 0; i < s.length(); i++){
        sum += s[i] - '0';
    }
    return sum;
}

bool check(string s){
    if(s[s.length() - 1] == '0' || s[s.length() - 1] == '5'){
        if(sum(s) % 3 == 0)
            return true;
        else
            return false;
    }
    else
        return false;
}

int main(){
    string s; cin >> s;
    if(check(s))
        cout << "YES";
    else
        cout << "NO";
}