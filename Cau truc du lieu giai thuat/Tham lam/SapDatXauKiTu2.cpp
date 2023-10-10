#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    map<char, int> freq;
    for(char x : freq) freq[x]++;
    int max_freq = INT_MIN, sum = 0;
    for(auto it : freq){
        if(it.second > max_freq){
            max_freq = it.second;
        }
        else{
            sum += it.second;
        }
    }
    if(sum >= max_freq - 1) cout << "YES";
    else cout << "NO";
}