#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    char a[n];
    map<char, int> mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
        break;
    }
    cout << endl;
    for(auto it = mp.rbegin(); it != mp.rend(); it++){
        cout << it->first << " " << it->second << endl;
        break;
    }
    cout << endl;
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    for(auto it = mp.rbegin(); it != mp.rend(); it++){
        cout << it->first <<  " " << it->second << endl;
    }
}