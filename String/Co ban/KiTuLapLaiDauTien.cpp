#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    set<char> se;
    bool flag = false;
    for(int i = 0; i < s.length(); i++){
        if(se.find(s[i]) != se.end()){
            cout << s[i];
            flag = true;
            break;
        }
        se.insert(s[i]);
    }
    if(flag == false)
        cout << "NONE";
}