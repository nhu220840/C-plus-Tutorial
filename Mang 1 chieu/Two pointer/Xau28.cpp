#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    int x, y; cin >> x >> y;
    int l = 0;
    int maxLength = 0;
    map<char, int> mp;
    for(int r = 0; r < s.length(); r++){
        mp[s[r]]++;
        while(mp['2'] > x || mp['8'] > y){
            mp[s[l]]--;
            l++;
        }
        maxLength = max(maxLength, r - l + 1);
    }
    cout << maxLength;
}