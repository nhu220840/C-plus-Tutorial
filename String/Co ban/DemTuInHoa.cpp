#include <bits/stdc++.h>

using namespace std;

bool isUpperCase(string s){
    for(int i = 0; i < s.length(); i++){
        if(islower(s[i]))
            return false;
    }
    return true;
}

int main(){
    string s; getline(cin, s);
    int cnt = 0;
    string word;
    stringstream ss(s);
    while(ss >> word){
        if(isUpperCase(word)) cnt++;
    }
    cout << cnt;
}