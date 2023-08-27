#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2; cin >> s1 >> s2;
    set<char> se1, se2, both;
    for(int i = 0; i < s1.length(); i++){
        se1.insert(s1[i]);
    }
    for(int i = 0; i < s2.length(); i++){
        se2.insert(s2[i]);
    }
    for(char x : se2){
        if(se1.find(x) != se1.end()){
            both.insert(x);
        }
    }
    for(char x : both) cout << x;
    cout << endl;
    both.clear();
    for(char x : s1) both.insert(x);
    for(char x : s2) both.insert(x);
    for(char x : both) cout << x;
}