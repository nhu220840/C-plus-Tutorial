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

bool check6(string s){
    for(char c : s){
        if(c == '6')
            return true;
    }
    return false;
}

int main(){
    string s; cin >> s;
    if(isPalindrome(s) && check6(s))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}