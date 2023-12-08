#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int priority(char c){
    if(c == '^')
        return 3;
    else if(c == '*' || c == '/')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    return 0; //muc do uu tien cua dau '()'
}

void solve(string s){
    string res = ""; //gap chu thi + vao string
    stack<char> st; //gap toan tu thi push vao stack
    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])) res += s[i];
        else if(s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            //pop lan luot tat ca cac toan tu trong stack khi gap dau ')' tuong ung
            while(!st.empty() && st.top() != '('){
                res += st.top();
                st.pop();
            }
            st.pop(); //xoa dau '('
        }
        else{
            //so sanh muc do uu tien cua toan tu
            //cai nao co muc do uu tien cao hon thi thuc hien trc
            while(!st.empty() && priority(st.top()) >= priority(s[i])){
                res += st.top();
                st.pop();
            }
            st.push(s[i]); //them toan tu co muc do uu tien thap hon vao stack
        }
    }
    while(!st.empty()){
        res += st.top();
        st.pop();
    }
    cout << res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    solve(s);
    
}