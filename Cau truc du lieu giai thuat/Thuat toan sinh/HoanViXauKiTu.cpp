#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    set<char> se;
    for(char x : s) se.insert(x);
    s = "";
    for(char x : se) s += x;
    do{
        cout << s << endl;
    }while(next_permutation(s.begin(), s.end()));
}