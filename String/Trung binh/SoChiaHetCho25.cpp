#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    if(s.length() == 1 && s[0] == '0'){
        cout << "YES";
        return 0;
    }
    else if(s.length() >= 2){
        string num = s.substr(s.length() - 2, 2);
        int number = stoi(num);
        if(number % 25 == 0)
            cout << "YES";
        else 
            cout << "NO";
    }
    else{
        cout << "NO";
        return 0;
    }
}