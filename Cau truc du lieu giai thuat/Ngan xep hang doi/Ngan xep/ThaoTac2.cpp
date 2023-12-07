#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    stack<int> st;
    int t; cin >> t;
    while(t--){
        cin.ignore();
        string tt; cin >> tt;
        if(tt == "show"){
            if(st.empty()) cout << "EMPTY" << endl;
            else{
                vector<int> tmp;
                while(!st.empty()){
                    tmp.push_back(st.top());
                    st.pop();
                }
                reverse(tmp.begin(), tmp.end());
                for(int x : tmp){
                    cout << x << " ";
                    st.push(x);
                }
                cout << endl;
            }
        }
        else if(tt == "push"){
            int x; cin >> x;
            st.push(x);
        }
        else if(tt == "pop"){
            if(!st.empty()) st.pop();
        }
        else{
            if(st.empty()) cout << "NONE" << endl;
            else cout << st.top() << endl;
        }
    }
}