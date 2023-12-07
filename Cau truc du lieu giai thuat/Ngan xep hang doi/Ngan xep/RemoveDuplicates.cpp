#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    stack<char> st;
    for(int i = 0; i < s.length(); i++){
        if(!st.empty() && s[i] == st.top()){
            st.pop();
        }
        else st.push(s[i]);
    }
    if(st.empty()){
        cout << "EMPTY";
        return 0;
    }
    vector<char> v;
    while(!st.empty()){
        v.push_back(st.top()); st.pop();
    }
    reverse(v.begin(), v.end());
    for(char x : v) cout << x;
}