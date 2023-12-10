#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    deque<int> q;
    int t; cin >> t;
    while(t--){
        string tt; cin >> tt;
        if(tt == "PUSHFRONT"){
            int x; cin >> x;
            q.push_front(x);
        }
        else if(tt == "PRINTFRONT"){
            cout << (q.empty() ? "NONE" : to_string(q.front())) << endl;
        }
        else if(tt == "POPFRONT"){
            if(!q.empty()) q.pop_front();
        }
        else if(tt == "PUSHBACK"){
            int x; cin >> x;
            q.push_back(x);
        }
        else if(tt == "PRINTBACK"){
            cout << (q.empty() ? "NONE" : to_string(q.back())) << endl;
        }
        else{
            if(!q.empty()) q.pop_back();
        }
    }
}