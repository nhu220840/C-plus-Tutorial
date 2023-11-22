#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//Idea: dem so luong ki tu trong xau
//Neu so luong cua moi ki tu la 1 so chan => co the xep duoc thanh xau doi xung
//Hoac co the ton tai 1 ki tu mang tan suat le, con lai la chan

//Neu so luong ki tu mang tan suat le la so chan, thi sau khi choi nguoi 1 se win
//Neu sau khi dem ki tu, tat ca deu mang tan suat chan thi nguoi 1 se win luon
//Cac truong hop con lai nguoi 2 se win

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    map<char, int> freq_char;
    for(char x : s) freq_char[x]++;
    int countOdd = 0;
    for(auto it : freq_char){
        if(it.second % 2 != 0) countOdd++;
    }
    if(countOdd == 0) cout << 1;
    else{
        if(countOdd % 2 == 0) cout << 2;
        else cout << 1;
    }
}