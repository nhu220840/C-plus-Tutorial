#include <bits/stdc++.h>

using namespace std;

string lower(string s){
    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

int main(){
    string s, t;
    getline(cin, s);
    getline(cin, t);
    s = lower(s);
    t = lower(t);
    string word;
    set<string> se;
    stringstream ss(t);
    while(ss >> word){
        se.insert(word);
    }
    set<string> res;
    stringstream ss1(s);
    while(ss1 >> word){
        if(se.find(word) == se.end()){
            res.insert(word);
        }
    }
    for(string x : res) cout << x << " ";
}