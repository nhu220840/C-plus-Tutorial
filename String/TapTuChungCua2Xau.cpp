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
    stringstream ss(s);
    while(ss >> word){
        se.insert(word);
    }
    vector<string> v;
    stringstream ss1(t);
    while(ss1 >> word){
        if(se.find(word) != se.end()){
            v.push_back(word);
            se.erase(word);
        }
    }
    sort(v.begin(), v.end());
    for(string x : v) cout << x << " ";
}