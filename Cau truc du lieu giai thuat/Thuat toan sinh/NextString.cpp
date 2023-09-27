#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string s;

void nextGen(){
    int i = s.length() - 2;
    while(i >= 0 && s[i] >= s[i + 1]){
        i--;
    }
    if(i == -1){
        cout << "NOT EXIST";
    }
    else{
        int j = s.length() - 1;
        while(s[i] >= s[j]){
            j--;
        }
        swap(s[i], s[j]);
        sort(s.begin() + i + 1, s.end());
        for(int i = 0; i < s.length(); i++){
            cout << s[i];
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s;
    nextGen();
}