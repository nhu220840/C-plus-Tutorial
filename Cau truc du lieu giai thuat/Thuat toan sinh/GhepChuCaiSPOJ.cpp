#include <bits/stdc++.h>

using namespace std;
using ll = long long;

char c;
string s;

bool isVowel(char c){
    return c == 'A' || c == 'E';
}

bool check(string s){
    for(int i = 1; i < s.length() - 1; i++){
        if(!isVowel(s[i - 1]) && isVowel(s[i]) && !isVowel(s[i + 1]))
            return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> c;
    for(int i = 'A'; i <= c; i++){
        s += i;
    }
    do{
        if(check(s)){
            cout << s << endl;
        }
    }while(next_permutation(s.begin(), s.end()));
}