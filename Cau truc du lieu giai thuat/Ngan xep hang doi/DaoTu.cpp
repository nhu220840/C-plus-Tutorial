#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    stack<string> st;
    while(cin >> s){
        st.push(s);
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}