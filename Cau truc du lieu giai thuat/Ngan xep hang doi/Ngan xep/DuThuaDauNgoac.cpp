#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool solve(string s){
    stack<char> st; //luu vi tri cua dau '()'
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(') st.push(i); //push vi tri vao
        else if(s[i] == ')'){
            int j = st.top(); //lay ra vi tri cua dau ')'
            st.pop();
            //truong hop thua dau ngoac: (a), ((x + y)) 
            if(i - j == 2 || (s[j + 1] == '(' && s[i - 1] == ')')){
                return true;
            }

        }
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    cout << (solve(s) ? "YES" : "NO");
}