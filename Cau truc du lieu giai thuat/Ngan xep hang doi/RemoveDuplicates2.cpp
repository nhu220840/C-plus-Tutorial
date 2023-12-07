#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(string s, int k){
    stack<pair<char, int>> st;
    for(char c : s){
        if(!st.empty() && c == st.top().first){
            int cnt = st.top().second + 1;
            if(cnt == k){
                for(int i = 0; i < k - 1; i++) st.pop();
            }
            else st.push({c, cnt});
        }
        else st.push({c, 1});
    }
    if(st.empty()) cout << "EMPTY"; 

    string res = "";
    while(!st.empty()){
        res += st.top().first;
        st.pop();
    }
    reverse(res.begin(), res.end());
    cout << res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    int k;
    cin >> s >> k;
    solve(s, k);
}