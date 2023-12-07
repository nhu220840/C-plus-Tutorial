#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int calculate(string s){
    stack<ll> st;
    for(int i = s.length() - 1; i >= 0; i--){
        if(isdigit(s[i])) st.push(s[i] - '0');
        else{
            ll x1 = st.top(); st.pop();
            ll x2 = st.top(); st.pop();
            if(s[i] == '+') st.push(x1 + x2);
            else if(s[i] == '-') st.push(x1 - x2);
            else if(s[i] == '*') st.push(x1 * x2);
            else st.push(x1 / x2);
        }
    }
    return st.top();
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    cout << calculate(s);
}