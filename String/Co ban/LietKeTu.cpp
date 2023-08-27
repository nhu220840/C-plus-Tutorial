#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '.' || s[i] == ',' || s[i] == '!' || s[i] == '?')
            s[i] = ' ';
    }
    vector<string> v;
    string word;
    stringstream ss(s);
    while(ss >> word){
        v.push_back(word);
    }
    for(string x : v) cout << x << " ";
}