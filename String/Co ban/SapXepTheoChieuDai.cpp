#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){
    if(a.length() != b.length())
        return a.length() < b.length();
    return a < b;
}

int main(){
    string s; getline(cin, s);
    vector<string> v;
    string word;
    stringstream ss(s);
    while(ss >> word){
        v.push_back(word);
    }
    sort(v.begin(), v.end(), cmp);
    for(string x : v) cout << x << " ";
}