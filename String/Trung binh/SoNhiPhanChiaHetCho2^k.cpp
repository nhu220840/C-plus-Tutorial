#include <bits/stdc++.h>

using namespace std;

bool check(string s, int k){
    if(s.length() <= k) return false;
    for(int i = 0; i < k; i++){
        if(s[s.length() - i - 1] == '1') return false;
    }
    return true;
}

int main(){
    string s;
    int k; 
    cin >> s >> k;
    cout << (check(s, k) ? "YES" : "NO");
}