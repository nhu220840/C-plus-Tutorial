#include <bits/stdc++.h>

using namespace std;

string Generation(string s){
    int i = s.length() - 1;
    while(i >= 1 && s[i] == '1'){
        s[i] = '0';
        i--;
    }
    if(i == 0){
        for(int j = 0; j < s.length(); j++){
            s[j] = '1';
        }
    }
    else{
        s[i] = '1';
    }
    return s;
}

int main(){
    int t; cin >> t;
    while(t--){
        cin.ignore();
        string s; cin >> s;
        cout << s << endl;
    }
}