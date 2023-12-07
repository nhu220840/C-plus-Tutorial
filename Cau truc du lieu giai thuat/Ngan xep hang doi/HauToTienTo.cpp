#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(string s){
    stack<string> st;
    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])) st.push(string(1, s[i]));
        else{
            string x1 = st.top(); st.pop();
            string x2 = st.top(); st.pop();
            string tmp = s[i] + x2 + x1;
            st.push(tmp);
        }
    }
    cout << st.top();
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    solve(s);
}