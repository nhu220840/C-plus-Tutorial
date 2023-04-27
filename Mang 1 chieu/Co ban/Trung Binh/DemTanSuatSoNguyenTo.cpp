#include <bits/stdc++.h>

using namespace std;

int isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return n > 1;
}

int main(){
    int n;
    vector<int> v;
    map<int, int> mp;
    while(cin >> n){
        if(isPrime(n)){
            mp[n]++;
            v.push_back(n);
        }
    }
    for(int x : v){
        if(mp[x] != 0){
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
        }
    }
}