#include <bits/stdc++.h>

using namespace std;

string ten(string s){
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

string hoa(string s){
    for(int i = 0; i < s.length(); i++){
        s[i] = toupper(s[i]);
    }
    return s;
}

int main(){
    string s; getline(cin, s);
    vector<string> v;
    string word;
    stringstream ss(s);
    while(ss >> word){
        v.push_back(word);
    }
    for(int i = 0; i < v.size() - 1; i++){
        cout << ten(v[i]);
        if(i != v.size() - 2){
            cout << " ";
        }
    }
    cout << ", ";
    cout << hoa(v[v.size() - 1]) << endl;
    cout << hoa(v[v.size() - 1]) << ", ";
    for(int i = 0; i < v.size() - 1; i++){
        cout << ten(v[i]) << " ";
    }
}