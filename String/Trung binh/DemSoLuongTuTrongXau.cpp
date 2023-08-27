#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; getline(cin, s);
    string word;
    stringstream ss(s);
    int cnt = 0;
    while(ss >> word){
        cnt++;
    }
    cout << cnt;
}