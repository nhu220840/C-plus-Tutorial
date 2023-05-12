#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){
    return a + b > b + a;
}

int main(){
    string s; cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i]))
            s[i] = ' ';
    }
    vector<string> v;
    string num;
    stringstream ss(s);
    while(ss >> num){
        while(num.length() > 1 && num[0] == '0'){
            num.erase(0, 1);
        }
        v.push_back(num);
    }
    sort(v.begin(), v.end(), cmp);
    for(string x : v) cout << x;
}