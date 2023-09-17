#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    set<char> se;
    int l = 0;
    int maxLength = INT_MIN;
    for(int r = 0; r < s.length(); r++){
        while(se.find(s[r]) != se.end()){
            maxLength = max(maxLength, r - l);
            auto it = se.find(s[l]);
            se.erase(it);
            l++;
        }
        se.insert(s[r]);
    }
    cout << maxLength;
}