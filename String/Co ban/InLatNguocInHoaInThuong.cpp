#include <bits/stdc++.h>

using namespace std;

string toUpper(string s){
    for(int i = 0; i < s.length(); i++){
        s[i] = toupper(s[i]);
    }
    return s;
}

string toLower(string s){
    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

int main(){
    string s; cin >> s;
    for(int i = s.length() - 1; i >= 0; i--){
        cout << s[i];
    }
    cout << endl;
    cout << toLower(s) << endl << toUpper(s);
}