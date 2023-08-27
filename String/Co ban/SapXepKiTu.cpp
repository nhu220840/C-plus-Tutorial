#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    vector<char> v;
    for(int i = 0; i < s.length(); i++){
        v.push_back(s[i]);
    }
    sort(v.begin(), v.end());
    for(char x : v) cout << x;
    cout << endl;
    for(int i = v.size() - 1; i >= 0; i--){
        cout << v[i];
    }
}