#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    stack<char> st;
    for(int i = 0; i < s.length(); i++){
        if(st.empty() || st.top() != s[i]) st.push(s[i]);
        else{
            if(st.empty()){ 
                cout << "EMPTY"; 
                return 0;
            }
            else st.pop();
        }
    }
    cout << s;
    return 0;
}