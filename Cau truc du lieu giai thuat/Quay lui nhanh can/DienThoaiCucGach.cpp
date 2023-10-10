#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string s;
char X[100];

string splitNum(int n){
    if(n == 2) return "abc";
    if(n == 3) return "def";
    if(n == 4) return "ghi";
    if(n == 5) return "jkl";
    if(n == 6) return "mno";
    if(n == 7) return "pqrs";
    if(n == 8) return "tuv";
    return "wxyz"; 
}

void print(){
    for(int i = 0; i < s.length(); i++){
        cout << X[i];
    }
    cout << " ";
}

void Try(int i){
    int num = s[i] - '0';
    for(char c : splitNum(num)){
        X[i] = c;

        if(i == s.length() - 1){
            print();
        }
        else{
            Try(i + 1);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s;
    sort(s.begin(), s.end());
    Try(0);
}