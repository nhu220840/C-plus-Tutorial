#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    stack<char> st;
    string s; cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(') st.push(s[i]);
        else{
            if(st.empty()) cnt++;
            else st.pop();
        }
    }
    while(!st.empty()){
        cnt++;
        st.pop();
    }
    cout << cnt;
}