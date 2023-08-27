#include <bits/stdc++.h>

using namespace std;

string reverseStr(string s){
    string tmp = "";
    for(int i = s.length() - 1; i >= 0; i--){
        tmp += s[i];
    }
    return tmp;
}

int main(){
    string s; cin >> s;
    string tmp = "";
    int cnt = 0;
    for(int i = s.length() - 1; i >= 0; i--){
        cnt++;
        tmp += s[i];
        if(cnt % 3 == 0 && cnt != s.length()){
            tmp += ",";
        }
    }
    cout << reverseStr(tmp);
}