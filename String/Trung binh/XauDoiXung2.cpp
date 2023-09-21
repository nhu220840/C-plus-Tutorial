#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int oddCnt = 0;
        map<char, int> mp;
        for(char c : s) mp[c]++;
        for(auto it : mp){
            if(it.second % 2 != 0){
                oddCnt++;
            }
        }

        if((s.length() % 2 == 0 && oddCnt == 0) || (s.length() % 2 != 0 && oddCnt == 1)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}