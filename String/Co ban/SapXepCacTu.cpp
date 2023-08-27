#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; getline(cin, s);
    vector<string> v;
    string word; 
    stringstream ss(s);
    while(ss >> word){
        v.push_back(word);
    }
    sort(v.begin(), v.end());
    for(string x : v) cout << x << " ";
    cout << endl;
    for(int i = v.size() - 1; i >= 0; i--){
        cout << v[i] << " ";
    }
}