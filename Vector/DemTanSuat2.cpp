#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<char, int>> fre;
    for(int i = 0; i < n; i++){
        char c; cin >> c;
        int check = 0;
        for(auto &p : fre){
            if(p.first == c){
                p.second++;
                check = 1;
                break;
            }
        }
        if(check == 0){
            fre.push_back({c, 1});
        }
    }
    cout << fre.size() << endl;
    for(auto p : fre){
        cout << p.first << " " << p.second << endl;
    }
}