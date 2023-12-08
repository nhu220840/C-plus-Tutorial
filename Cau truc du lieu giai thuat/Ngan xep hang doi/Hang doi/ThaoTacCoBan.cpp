#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    queue<int> q;
    while(n--){
        int tt; cin >> tt;
        if(tt == 1){
            cout << q.size() << endl;
        }
        else if(tt == 2){
            cout << (q.empty() ? "YES" : "NO") << endl;
        }
        else if(tt == 3){
            int k; cin >> k;
            q.push(k);
        }
        else if(tt == 4){
            if(!q.empty()) q.pop();
        }
        else if(tt == 5){
            cout << (q.empty() ? -1 : q.front()) << endl;
        }
        else{
            cout << (q.empty() ? -1 : q.back()) << endl;
        }
    }
}