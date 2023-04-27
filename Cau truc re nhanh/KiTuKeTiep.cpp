#include <bits/stdc++.h>

using namespace std;

int main(){
    char c; cin >> c;
    if(c >= 'A' && c < 'Z')
        cout << char(c + 33);
    if(c >= 'a' && c < 'z')
        cout << char(c + 1);
    if(c == 'z' || c == 'Z')
        cout << "a";
}