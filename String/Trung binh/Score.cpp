#include <bits/stdc++.h>

using namespace std;

#define si pair<string, int>

bool cmp(si a, si b){
    if(a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}

int main(){
    string s; 
    map<string, int> mp;
    while(getline(cin, s)){
        string team1 = "", team2 = "";
        int score1 = 0, score2 = 0;
        int pos = s.find("-");
        string s1 = s.substr(0, pos - 1);
        string s2 = s.substr(pos + 1);

        string tmp;
        stringstream ss2(s2);
        ss2 >> tmp;
        score2 = stoi(tmp);
        while(ss2 >> tmp){
            team2 += tmp + " ";
        }
        team2.pop_back();

        vector<string> v;
        stringstream ss1(s1);
        while(ss1 >> tmp){
            v.push_back(tmp);
        }
        score1 = stoi(v.back());
        for(int i = 0; i < v.size() - 1; i++){
            team1 += v[i] + " ";
        }
        team1.pop_back();
        
        mp[team1] += score1;
        mp[team2] += score2;
    }

    vector<si> team;
    for(auto it : mp){
        team.push_back(it);
    }
    sort(team.begin(), team.end(), cmp);
    for(auto x : team) cout << x.first << " " << x.second << endl;
}