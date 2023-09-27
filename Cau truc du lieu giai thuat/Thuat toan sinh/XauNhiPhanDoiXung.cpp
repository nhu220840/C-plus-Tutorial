#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[1000001], final = 0;

bool isPalindrome(string s){
    int i = 0, j = s.length() - 1;
    while(i <= j){
        if(s[i] != s[j])
            return false;
        i++; j--;
    }
    return true;
}

void initialize(){
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}

void nextGen(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0)
        final = 1;
    else{
        a[i] = 1;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    initialize();
    string res = "";
    while(final == 0){
        for(int i = 1; i <= n; i++){
            res += to_string(a[i]);
        }
        if(isPalindrome(res)){
            cout << res;
            cout << endl;
        }
        res = "";
        nextGen();
    }
}