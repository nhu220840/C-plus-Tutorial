#include <bits/stdc++.h>

using namespace std;

string tolower(string s){
    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

int main(){
    int t; cin >> t;
    cin.ignore();
    map<string, int> mp;
    while(t--){
        string s; getline(cin, s);
        vector<string> v;
        string tmp;
        stringstream ss(s);
        while(ss >> tmp){
            v.push_back(tmp);
        }
        string email = tolower(v[v.size() - 2]);
        for(int i = 0; i < v.size() - 2; i++){
            email += tolower(v[i][0]);
        }
        mp[email]++;
        if(mp[email] == 1)
            cout << email << "@xyz.edu.vn" << endl;
        else
            cout << email << mp[email] << "@xyz.edu.vn" << endl;
        string pass = v[v.size() - 1];
        stringstream ss1(pass);
        while(getline(ss1, tmp, '/')){
            cout << stoi(tmp);
        }
        cout << endl;
    }
}