#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    stack<char> st;
    int res = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(') st.push('(');
        else{
            if(st.empty()) res++;
            else st.pop();
        }
    }
    cout << res;
}