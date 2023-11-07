#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int k; 
        string s;
        cin >> k >> s;
        map<char, int> mp;
        for(char c : s) mp[c]++;

        priority_queue<int> q;
        for(auto it : mp){
            q.push(it.second);
        }

        while(k--){
            ll tmp = q.top();
            q.pop();
            tmp--;
            if(tmp == -1) break;
            q.push(tmp);
        }

        ll sum = 0;
        while(q.size() > 0){
            sum += (ll)pow(q.top(), 2);
            q.pop();
        }
        cout << sum << endl;
    }
}
