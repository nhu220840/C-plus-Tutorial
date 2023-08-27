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

int main(){
    string s; cin >> s;
    if(checkPalindrome(s))
        cout << "YES";
    else
        cout << "NO";
}