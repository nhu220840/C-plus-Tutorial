#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string s; getline(cin, s);
    map<char, int> mp;
    for(int i = 0; i < s.length(); i++){
        mp[s[i]]++;
    }
    ll res = s.length();
    for(auto it : mp){
        if(it.second >= 2){
            res += 1ll * it.second * (it.second - 1) / 2;
        }
    }
    cout << res;
}