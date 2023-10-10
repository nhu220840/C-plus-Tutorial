#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string s;
int X[100];

void print(){
    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])){
            if(X[i] == 1) cout << (char)tolower(s[i]);
            else cout << (char)toupper(s[i]);
        }
        else cout << s[i];
    }
    cout << endl;
}

void Try(int i){
    for(int j = 0; j <= 1; j++){
        X[i] = j;
        if(i == s.length() - 1){
            print();
        }
        else Try(i + 1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s;
    Try(0);
}