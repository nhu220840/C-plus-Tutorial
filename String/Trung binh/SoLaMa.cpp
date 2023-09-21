#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int num = 0;
        map<char, int> a = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        for(int i = 0; i < s.length(); i++){
            if(i + 1 < s.length() && a[s[i]] < a[s[i + 1]]){
                num += a[s[i + 1]] - a[s[i]];
                i++;
            }
            else{
                num += a[s[i]];
            }
        }
        cout << num << endl;
    }
}