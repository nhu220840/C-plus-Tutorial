#include <bits/stdc++.h>
using namespace std;

using ll = long long;

//s[i] : loi

bool cmp(pair<string, int> a, pair<string, int> b){
    if(a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}

int main(){
    string s;
    map<string, int> mp;
    while(getline(cin, s)){
        string X = "", Y = ""; int a = 0, b = 0;
        int idx = s.find("-");
        string s1 = s.substr(0, idx - 1);
        string s2 = s.substr(idx + 1);
        stringstream ss2(s2);
        string tmp;
        ss2 >> tmp;
        b = stoi(tmp);
        while(ss2 >> tmp){
            Y += tmp + " ";
        }
        Y.pop_back();
        vector<string> v; 
        stringstream ss1(s1);
        while(ss1 >> tmp){
            v.push_back(tmp);
        }
        a = stoi(v.back());
        for(int i = 0; i < v.size() - 1; i++){
            X += v[i] + " ";
        }
        X.pop_back();
        //cout << X << ' ' << a << " - " << b << ' ' << Y << endl;
        mp[X] += a; mp[Y] += b;
    }
    vector<pair<string, int>> v;
    for(auto it : mp){
        v.push_back(it);
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it : v){
        cout << it.first << ' ' << it.second << endl;
    }
}