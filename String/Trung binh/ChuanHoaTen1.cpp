#include <bits/stdc++.h>

using namespace std;

string normalizeName(string s){
    string tmp = "";
    string word;
    stringstream ss(s);
    while(ss >> word){
        tmp += toupper(word[0]);
        for(int i = 1; i < word.length(); i++){
           tmp += tolower(word[i]);
        }
        tmp += " ";
    }
    tmp.pop_back();
    return tmp;
}

string normalizeDate(string s){
    if(s[1] == '/') s = "0" + s;
    if(s[4] == '/') s.insert(3, "0");
    return s;
}

int main(){
    string name; getline(cin, name);
    string date; cin >> date;
    cout << normalizeName(name) << endl << normalizeDate(date);
}