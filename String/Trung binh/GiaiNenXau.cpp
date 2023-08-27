#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    // for(int i = 0; i < s.length(); i++){
    //     if(isalpha(s[i])){
    //         char c = s[i];
    //         int fre = 0; i++;
    //         while(i < s.length() && isdigit(s[i])){
    //             fre = fre * 10 + (s[i] - '0');
    //             i++;
    //         }
    //         for(int j = 0; j < fre; j++){
    //             cout << c;
    //         }
    //         i--;
    //     }
    // }

    // string t = s;
    // string alpha = "";
    // for(char x : s){
    //     if(isalpha(x)){
    //         alpha += x;
    //         x = ' ';
    //     }
    // }
    // vector<int> freq;
    // string num;
    // stringstream ss(s);
    // while(ss >> num){
    //     freq.push_back(stoi(num));
    // }
    // for(int i = 0; i < alpha.length(); i++){
    //     for(int j = 0; j < freq[i] << j++){
    //         cout << alpha[i];
    //     }
    // }

    char word;
    int n;
    stringstream ss(s);
    while(ss >> word >> n){
        for(int i = 0; i < n; i++){
            cout << word;
        }
    }
    
}