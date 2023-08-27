#include <bits/stdc++.h>

using namespace std;

bool check(string s){
    int sum = 0;
    for(int i = 0; i < s.length(); i++){
        sum += s[i] - '0';
    }
    if(sum % 3 == 0 && s[s.length() - 1] % 2 == 0)
        return true;
    else
        return false;
}

int main(){
    string s; cin >> s;
    if(check(s))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}