#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    map<string, int> mp;
    for(int i = 0; i < n; i++){
        string name; cin >> name;
        mp[name]++;
    }
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    int maxScore = INT_MIN, minScore = INT_MAX;
    string maxScoreName, minScoreName; 
    for(auto it : mp){
        if(it.second > maxScore){
            maxScore = it.second;
            maxScoreName = it.first;
        }
        if(it.second < minScore){
            minScore = it.second;
            minScoreName = it.first;
        }
    }
    cout << minScoreName << " " << minScore << endl;
    cout << maxScoreName << " " << maxScore << endl;
}