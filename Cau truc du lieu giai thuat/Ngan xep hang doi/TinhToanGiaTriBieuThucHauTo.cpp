#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll calculate(string s){
    stack<ll> st;
    for(int i = 0; i < s.length(); i++){
        if(isdigit(s[i])) st.push(s[i] - '0');
        else{
            ll x1 = st.top(); st.pop();
            ll x2 = st.top(); st.pop();
            if(s[i] == '+') st.push(x2 + x1);
            else if(s[i] == '-') st.push(x2 - x1);
            else if(s[i] == '*') st.push(x2 * x1);
            else st.push(x2 / x1);
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