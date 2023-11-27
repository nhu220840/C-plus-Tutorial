#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<pair<int, int>> v;
    cin.ignore();
    for(int i = 1; i <= n; i++){
        string s; getline(cin, s);
        int num;
        stringstream ss(s);
        while(ss >> num){
            v.push_back({i, num});
        }
    }
    sort(v.begin(), v.end());
    for(auto it : v){
        cout << it.first << " " << it.second << endl;
    }
}