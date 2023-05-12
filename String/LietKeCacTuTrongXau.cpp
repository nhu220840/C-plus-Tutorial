#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; getline(cin, s);
    set<string> se;
    vector<string> v;
    stringstream ss(s);
    string word;
    while(ss >> word){
        v.push_back(word);
    }
    for(string s : v){
        se.insert(s);
    }
    for(string x : se) cout << x << " ";
    cout << endl;
    for(string x : v){
        if(se.count(x) == 1){
            cout << x << " ";
            se.erase(x);
        }
    }
}