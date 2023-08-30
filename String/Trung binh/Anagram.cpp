#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s; getline(cin, s);
        vector<string> v;
        map<char, int> mp1, mp2;
        bool found = true;
        string tmp;
        stringstream ss(s);
        while(ss >> tmp){
            v.push_back(tmp);
            string s1 = v.front();
            string s2 = v.back();
            for(char c : s1) mp1[c]++;
            for(char c : s2) mp2[c]++;
        }

        for(auto it : mp1){
            if(it.second != mp2[it.first]){
                cout << "NO" << endl;
                found = false;
                break;
            }
        }
        if(found == true)
            cout << "YES" << endl;
    }
}