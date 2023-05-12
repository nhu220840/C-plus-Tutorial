#include <bits/stdc++.h>

using namespace std;

bool check(string s, string t){
    int i = 0, j = 0;
    while(i < s.length() && j < t.length()){
        if(s[i] == t[j]){
            i++;
            j++;
        }
        else
            i++;
    }
    if(j == t.length())
        return true;
    else
        return false;
}

int main(){
    string s, t;
    getline(cin, s);
    if(check(s, "python"))
        cout << "YES";
    else
        cout << "NO";
}