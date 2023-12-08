#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    queue<int> q;
    while(n--){
        string tt; cin >> tt;
        if(tt == "PUSH"){
            int k; cin >> k;
            q.push(k);
        }
        else if(tt == "POP"){
            if(!q.empty()) q.pop();
        }
        else{
            cout << (q.empty() ? "NONE" : to_string(q.front())) << endl;
        }
    }
}