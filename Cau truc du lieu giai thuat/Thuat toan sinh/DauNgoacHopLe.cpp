#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, final = 0;
string s;
set<string> printed;

bool isValid(string s){
    vector<char> v; 
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ')'){
            if(v.empty()) return false;
            else v.pop_back();
        }
        else{
            v.push_back(s[i]);
        }
    }
    return v.empty();
}

void initialize(){
    s = string(n, '(');
}

void nextGen(){
    int i = n;
    while(i >= 0 && s[i] == ')'){
        s[i] = '(';
        i--;
    }
    if(i == -1)
        final = 1;
    else{
        s[i] = ')';
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    initialize();
    while(!final){
        if(isValid(s)){
            if(printed.find(s) == printed.end()){
                cout << s << endl;
                printed.insert(s);
            }
        }
        nextGen();
    }   
    if(printed.size() == 0) cout << "NOT FOUND";
}