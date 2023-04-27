#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<int, int>> fre;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        int check = 0;
        for(auto &p : fre){
            if(p.first == x){
                check = 1;
                p.second++;
                break;
            }
        }
        if(check == 0){
            fre.push_back({x, 1});
        }
    }
    for(int i = 0; i < fre.size(); i++){
        cout << fre[i].first << " " << fre[i].second << endl; 
    }
}