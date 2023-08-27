#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    set<char> se;
    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i]))
            se.insert(s[i]);
    }
    if(se.size() == 26)
        cout << "YES";
    else
        cout << "NO";
}