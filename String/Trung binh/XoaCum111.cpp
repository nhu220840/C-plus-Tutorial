#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    bool found = false;
    for(int i = 0; i < s.length(); i++){
        if(i + 2 < s.length() && s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '1')
            i += 2;
        else{
            cout << s[i];
            found = true;
        }
    }
    if(!found) cout << "EMPTY";
}