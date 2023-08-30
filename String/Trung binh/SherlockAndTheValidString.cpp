#include <bits/stdc++.h>

using namespace std;

string isValid(string s){
    map<char, int> mp;
    map<int, int> freq;
    for(char c : s) mp[c]++;
    for(auto it : mp){
        freq[it.second]++;
    }
    if(freq.size() == 1)
        return "YES";

    if(freq.size() == 2){
        auto it = freq.begin();
        int freq1 = it->first;
        int count1 = it->second;
        it++;
        int freq2 = it->first;
        int count2 = it->second;

        if((count1 == 1 && (freq1 - 1 == freq2 || freq1 == 1)) || (count2 == 1 && (freq2 - 1 == freq1 || freq2 == 1))){
            return "YES";
        }
    }
    return "NO";
}

int main(){
    string s; cin >> s;
    cout << isValid(s);
}