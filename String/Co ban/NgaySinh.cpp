#include <bits/stdc++.h>

using namespace std;

string normalizeDate(string s){
    if(s[1] == '/') s = "0" + s;
    if(s[4] == '/') s.insert(3, "0");
    return s;
}

int main(){
    string s; cin >> s;
    cout << normalizeDate(s);
}