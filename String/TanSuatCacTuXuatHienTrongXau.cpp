#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; getline(cin, s);
    map<string, int> mp;
    string word;
    stringstream ss(s);
    vector<string> v;
    while(ss >> word){
        mp[word]++;
        v.push_back(word);
    }
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    set<string> se;
    for(string s : v){
        if(se.count(s) == 0){
            cout << s << " " << mp[s] << endl;
            se.insert(s);
        }
    }
}