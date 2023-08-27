#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    vector<char> v;
    for(int i = 0; i < s.length(); i++){
        v.push_back(s[i]);
    }
    sort(v.begin(), v.end());
    while(v[0] == '0' && v.size() != 1){
        v.erase(v.begin());
    }
    for(char x : v) cout << x;
}