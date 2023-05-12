#include <bits/stdc++.h>

using namespace std;

int isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return n > 1;
}

bool check(string s){
    int sum = 0;
    for(int i = 0; i < s.length(); i++){
        if(isPrime(s[i] - '0') == 1)
            sum += (s[i] - '0');
        else{
            return false;
        }
    }
    if(isPrime(sum))
        return true;
    else
        return false;
}

int main(){
    string s; cin >> s;
    if(check(s))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}