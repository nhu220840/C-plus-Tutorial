#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string minimumWindow(string s, string t){
    map<char, int> freq_s, freq_t;
    for(char c : t) freq_t[c]++;
    int l = 0, count_t = 0;
    int ans = INT_MAX, pos = -1;
    for(int r = 0; r < s.length(); r++){
        freq_s[s[r]]++;
        if(freq_s[s[r]] <= freq_t[s[r]])
            count_t++; //dem so luong ki tu cua xau t
        if(count_t != t.length()) continue; //neu chua du ki tu thi quay lai dem tiep, du roi thi bat dau ktra
        while(freq_t[s[l]] == 0 || freq_s[s[l]] > freq_t[s[l]]){
            freq_s[s[l]]--;
            l++;
        }

        int cur_len = r - l + 1;
        if(cur_len < ans){
            ans = cur_len;
            pos = l;
        }
    }

    return (pos == -1) ? "-1" : s.substr(pos, ans);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t; cin >> s >> t;
    cout << minimumWindow(s, t);
}