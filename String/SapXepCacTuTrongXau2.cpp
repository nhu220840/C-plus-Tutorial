#include <bits/stdc++.h>

using namespace std;

bool checkPalindrome(string s){
    int l = 0, r = s.length() - 1;
    while(l <= r){
        if(s[l] != s[r])
            return false;
        l++; r--;
    }
    return true;
}

bool cmp(string a, string b){
    return a.length() < b.length();
}

int main(){
    string s; getline(cin, s);
    set<string> se;
    string word;
    stringstream ss(s);
    vector<string> v;
    while(ss >> word){
        if(checkPalindrome(word) && se.count(word) == 0){
            v.push_back(word);
        se.insert(word);
        }
    }
    stable_sort(v.begin(), v.end(), cmp);
    for(string s : v){
        cout << s << " ";
    }
}