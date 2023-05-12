#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    map<char, int> mp;
    for(int i = 0; i < s.length(); i++){
        mp[s[i]]++;
    }
    int max_freq = INT_MIN, min_freq = INT_MAX;
    char res_min, res_max;
    for(auto it : mp){
        if(it.second >= max_freq){
            max_freq = it.second;
            res_max = it.first;
        }
        if(it.second <= min_freq){
            min_freq = it.second;
            res_min = it.first;
        }
    }
    cout << res_max << " " << max_freq << endl << res_min << " " << min_freq;
}