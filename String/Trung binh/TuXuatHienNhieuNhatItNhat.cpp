#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; getline(cin, s);
    map<string, int> mp;
    string word;
    stringstream ss(s);
    while(ss >> word){
        mp[word]++;
    }
    int max_freq = INT_MIN, min_freq = INT_MAX;
    string res_max, res_min;
    for(auto it : mp){
        if(it.second >= max_freq){
            res_max = it.first;
            max_freq = it.second;
        }
        if(it.second <= min_freq){
            res_min = it.first;
            min_freq = it.second;
        }
    }
    cout << res_max << " " << max_freq << endl << res_min << " " << min_freq;
}