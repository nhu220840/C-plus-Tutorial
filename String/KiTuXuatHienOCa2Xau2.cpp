#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2; cin >> s1 >> s2;
    set<char> se1, se2;
    for(char x : s1) se1.insert(x);
    for(char x : s2) se2.insert(x);
    for(char x : se1){
        if(se2.count(x) == 0)
            cout << x;
    }
    cout << endl;
    for(char x : se2){
        if(se1.count(x) == 0)
            cout << x;
    }
}