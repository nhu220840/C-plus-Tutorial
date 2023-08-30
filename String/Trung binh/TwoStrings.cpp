#include <bits/stdc++.h>

using namespace std;

int main(){
    int p; cin >> p;
    cin.ignore();
    while(p--){
        string s1, s2; cin >> s1 >> s2;
        map<char, int> mp1, mp2;
        bool found = false;
        for(char c : s1) mp1[c]++;
        for(char c : s2) mp2[c]++;
        for(auto it : mp1){
            if(mp2.find(it.first) != mp2.end()){
                cout << "YES" << endl;
                found = true;
                break;
            }
        }
        if(found == false)
            cout << "NO" << endl;
    }
}