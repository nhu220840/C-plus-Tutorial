#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool solve(string s){
    stack<char> st;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(') st.push(s[i]);
        else if(s[i] == ')'){
            int j = st.top(); st.pop();
            //(a): true
            //(x + y): true
            if(i - j == 2 || if(s[j]))
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
}