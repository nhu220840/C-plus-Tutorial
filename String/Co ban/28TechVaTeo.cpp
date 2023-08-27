#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '2' || s[i] == '8' || s[i] == 't' || s[i] == 'e' || s[i] == 'c' || s[i] == 'h')
            cnt++;
        else
            cout << s[i];
    }
    if(cnt == s.length())
        cout << "EMPTY";
}