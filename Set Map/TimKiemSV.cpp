#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    map<string, string> mp;
    for(int i = 0; i < n; i++){
        string ID; cin >> ID;
        cin.ignore();
        string name;
        getline(cin, name);
        mp[ID] = name;
    }    
    int q; cin >> q;
    while(q--){
        string findID; cin >> findID;
        if(mp.find(findID) != mp.end()){
            cout << mp[findID] << endl;
        }
        else cout << "NOT FOUND" << endl;
    }   
}
