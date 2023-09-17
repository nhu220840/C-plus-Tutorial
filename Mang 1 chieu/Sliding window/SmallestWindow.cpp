#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    set<char> se;
    for(char c : s) se.insert(c);
    int n = se.size();
    int l = 0;
    int minLength = INT_MAX;
    int cnt = 0;
    map<char, int> visited;
    for(int r = 0; r < s.length(); r++){
        visited[s[r]]++;
        if(visited[s[r]] == 1) cnt++;
        if(cnt == n){
            while(visited[s[l]] > 1){
                visited[s[l]]--;
                l++;
            }
            minLength = min(minLength, r - l + 1);
        }
    }   
    cout << minLength;
}