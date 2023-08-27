#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s){
    int l = 0, r = s.length() - 1;
    while(l <= r){
        if(s[l] != s[r])
            return false;
        l++; r--;
    }
    return true;
}

int main(){
    string s; getline(cin, s);
    vector<string> v; 
    string word;
    stringstream ss(s);
    while(ss >> word){
        if(isPalindrome(word))
            v.push_back(word);
    }
    sort(v.begin(), v.end());
    for(string x : v) cout << x << " ";
}