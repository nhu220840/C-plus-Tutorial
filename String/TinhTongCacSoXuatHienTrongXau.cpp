#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i]))
            s[i] = ' ';
    }
    long long sum = 0;
    string num;
    stringstream ss(s);
    while(ss >> num){
        long long number = stoll(num);
        sum += number;
    }
    cout << sum;
}