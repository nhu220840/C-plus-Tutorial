#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){
    if(a.length() != b.length())
        return a.length() < b.length();
    else
        return a < b;
}

int main(){
    string s; getline(cin, s);
    string word;
    stringstream ss(s);
    vector<string> v;
    while(ss >> word){
        v.push_back(word);
    }
    sort(v.begin(), v.end());
    for(string s : v){
        cout << s << " ";
    }
    cout << endl;
    sort(v.begin(), v.end(), cmp);
    for(string s : v){
        cout << s << " ";
    }
}