#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    map<char, int> mp;
    for(int i = 0; i < s.length(); i++){
        mp[s[i]]++;
    }
    int max_freq = INT_MIN, min_freq = INT_MAX;
    char max_alpha, min_alpha;
    for(auto it : mp){
        if(it.second > max_freq){
            max_freq = it.second;
            max_alpha = it.first;
        }
        if(it.second <= min_freq){
            min_freq = it.second;
            min_alpha = it.first;
        }
    }
    cout << max_alpha << " " << max_freq << endl;
    cout << min_alpha << " " << min_freq << endl;
    cout << mp.size() << endl;
}
