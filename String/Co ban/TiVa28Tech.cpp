#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    int cnt = 0;
    string word;
    stringstream ss(s);
    while(ss >> word){
        if(word == "28tech") cnt++;
    }
    cout << cnt;
}