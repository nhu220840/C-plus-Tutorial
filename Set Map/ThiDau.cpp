#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    cin.ignore();

    map<string, vector<string>> mp;

    for(int i = 0; i < n; i++){
        string match, team1, team2;
        getline(cin, match);
        int pos = match.find('-');
        team1 = match.substr(0, pos - 1);
        team2 = match.substr(pos + 2);
        mp[team1].push_back(team2);
        mp[team2].push_back(team1);
    }

    for(auto it : mp){
        cout << it.first << " : ";
        sort(it.second.begin(), it.second.end());
        for(int i = 0; i < it.second.size(); i++){
            cout << it.second[i];
            if (i != it.second.size() - 1){
                cout << ", ";
            }
        }
        cout << endl;
    }
}
