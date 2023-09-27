#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, final = 0;
string s;

void initialize(){
    s = string(n, '6');
}

void nextGen(){
    int i = n - 1;
    while(i >= 0 && s[i] == '8'){
        s[i] = '6';
        i--;
    }
    if(i == -1)
        final = 1;
    else{
        s[i] = '8';
    }
}

bool check(string s){
    if(s[0] == '6' || s[n - 1] == '8')
        return false;
    if(s.find("88") != string::npos)
        return false;
    if(s.find("6666") != string::npos)
        return false;
    return true;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    initialize();
    while(!final){
        if(check(s)) cout << s << endl;
        nextGen();
    }
}