#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k;
    string s;
    cin >> k >> s;
    map<char, int> freq;
    for(char x : s) freq[x]++;
    priority_queue<int> q;
    for(auto it : freq) q.push(it.second);
    while(k--){
        int tmp = q.top(); q.pop();
        tmp--;
        if(tmp == -1) break;
        q.push(tmp);
    }

    ll sum = 0;
    while(!q.empty()){
        sum += 1ll * q.top() * q.top(); q.pop();
    }
    cout << sum;
}