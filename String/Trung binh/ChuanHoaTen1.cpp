#include <bits/stdc++.h>

using namespace std;

string ten(string s){
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

int main(){
    string name, date; 
    getline(cin, name);
    getline(cin, date);
    vector<string> v1, v2;
    string word;
    stringstream ss(name);
    while(ss >> word){
        v1.push_back(word);
    }
    for(string word : v1){
        cout << ten(word) << " ";
    }
    cout << endl;
    string day;
    stringstream ss1(date);
    while(getline(ss1, day, '/')){
        v2.push_back(day);
    }
    for(int i = 0; i < v2.size(); i++){
        cout << setfill('0') << setw(2) << v2[i];
        if(i != v2.size() - 1)
            cout << "/";
    }
}