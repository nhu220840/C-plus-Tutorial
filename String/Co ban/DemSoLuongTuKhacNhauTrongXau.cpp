#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    set<string> se;
    string word;
    stringstream ss(s);
    while(ss >> word){
        se.insert(word);
    }
    cout << se.size();
}