#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void nextGeneration(string s){
    int i = s.length() - 1;
    while(i >= 0 && s[i] == '1'){
        s[i] = '0';
        i--;
    }
    if(i < 0){
        cout << s;
    }
    else{
        s[i] = '1';
        cout << s;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    nextGeneration(s);
}