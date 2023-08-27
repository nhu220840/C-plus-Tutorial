#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    int cnt = 0;
    s += "@";
    for(int i = 1; i < s.length(); i++){
        cnt++;
        if(s[i] != s[i - 1]){
            cout << s[i - 1] << cnt;
            cnt = 0;
        }
    }
}