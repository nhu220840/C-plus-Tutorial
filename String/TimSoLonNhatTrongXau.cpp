#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string s; cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])){
            s[i] = ' ';
        }
    }
    ll max_val = INT_MIN;
    stringstream ss(s);
    string word;
    while(ss >> word){
        ll tmp = stoll(word);
        max_val = max(max_val, tmp);
    }
    cout << max_val;
}