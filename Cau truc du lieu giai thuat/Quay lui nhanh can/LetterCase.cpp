#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string s, tmp;
vector<string> v;

void Try(int i){
    if(i == s.length()){
        v.push_back(tmp);
        return; 
    }

    if(isdigit(s[i])){
        tmp.push_back(s[i]);
        Try(i + 1);
        tmp.pop_back();
    }
    else{
        tmp.push_back(toupper(s[i]));
        Try(i + 1);
        tmp.pop_back();

        tmp.push_back(tolower(s[i]));
        Try(i + 1);
        tmp.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s;
    Try(0);
    sort(v.begin(), v.end());
    for(string x : v) cout << x << endl;
}