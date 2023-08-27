#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){
    if(a.length() != b.length())
        return a.length() > b.length();
    return a > b;
}

int main(){
    string s; getline(cin, s);
    for(int i = 1; i < s.length(); i++){
        if(s[i] != s[i - 1]){
            s.insert(i, " ");
            i++;
        }
    }
    vector<string> v;
    string word;
    stringstream ss(s);
    while(ss >> word){
        v.push_back(word);
    }
    sort(v.begin(), v.end(), cmp);
    cout << v[0];
}