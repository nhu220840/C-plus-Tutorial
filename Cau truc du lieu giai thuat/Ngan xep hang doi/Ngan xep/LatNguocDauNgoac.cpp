#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    stack<char> st;
    int cnt = 0;
    for(char c : s){
        if(c == '(') st.push(c);
        else{
            if(st.empty()){
                cnt++;
                st.push('(');
            }
            else st.pop();
        }
    }
    cnt += st.size() / 2; //truong hop tat ca cac dau con lai deu la dau '(
    cout << cnt;
}