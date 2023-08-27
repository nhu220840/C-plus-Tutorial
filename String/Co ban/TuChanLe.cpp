#include <bits/stdc++.h>

using namespace std;

string revStr(string s){
    string tmp = "";
    for(int i = s.length() - 1; i >= 0; i--){
        tmp += s[i];
    }
    return tmp;
}

int main(){
    string s; getline(cin, s);
    vector<string> v;
    string word;
    stringstream ss(s);
    while(ss >> word){
        v.push_back(word);
    }
    for(int i = 0; i < v.size(); i++){
        if(i % 2 == 0)
            cout << v[i] << " ";
        else{
            cout << revStr(v[i]) << " ";
        }
    }
}