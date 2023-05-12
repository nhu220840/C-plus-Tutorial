#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    if(s.length() <= 2){
        int num1 = stoi(s);
        if(num1 % 4 == 0){
            cout << "YES";
            return 0;
        }
        else{
            cout << "NO";
            return 0;
        }
    }
    else{
        string num = s.substr(s.length() - 2, 2);
        int number = stoi(num);
        if(number % 4 == 0){
            cout << "YES";
            return 0;
        }
        else{
            cout << "NO";
            return 0;
        }
    }
}