#include <bits/stdc++.h>

using namespace std;

bool increase(string s){
    for(int i = 1; i < s.length(); i++){
        if(s[i] < s[i - 1])
            return false;
    }
    return true;
}

bool decrease(string s){
    for(int i = 1; i < s.length(); i++){
        if(s[i] > s[i - 1])
            return false;
    }
    return true;
}

int main(){
    string s; cin >> s;
    if(increase(s) || decrease(s))
        cout << "YES" << endl;
    else
        cout << "NO" << endl; 
}