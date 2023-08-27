#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    string tmp = "", num = "";
    for(int i = 0; i < s.length(); i++){
        if(isdigit(s[i]))
            num += s[i];
        else
            tmp += s[i];
    }
    cout << num << endl << tmp;
}