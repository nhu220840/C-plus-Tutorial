#include <bits/stdc++.h>

using namespace std;

bool isBeautifulNumber(string s){
    for(int i = 1; i < s.length(); i++){
        if(abs(s[i] - s[i - 1]) != 1)
            return false;
    }
    return true;
}

int main(){
    string s; cin >> s;
    if(isBeautifulNumber(s))
        cout << "YES";
    else
        cout << "NO";
}