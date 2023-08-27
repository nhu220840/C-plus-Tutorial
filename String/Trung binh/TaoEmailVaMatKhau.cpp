#include <bits/stdc++.h>

using namespace std;

void tolower(string &s){
    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
}

int main(){
    int n; cin >> n;
    cin.ignore();
    while(n--){
        string s;
        getline(cin, s);
        tolower(s);
        string word;
        vector<string> name;
        stringstream ss(s);
        while(ss >> word){
            name.push_back(word);
        }
        cout << name[name.size() - 2];
        for(int i = 0; i < name.size() - 2; i++){
            cout << name[i][0];
        }
        cout << "@xyz.edu.vn" << endl;
        string date;
        vector<int> pass;
        stringstream ss1(name.back());
        while(getline(ss1, date, '/')){
            int birth = stoi(date);
            pass.push_back(birth);
        }
        for(int x : pass){
            cout << x;
        }
        cout << endl;
    }
}