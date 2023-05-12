#include <bits/stdc++.h>

using namespace std;

struct word{
    string data;
    int fre;
};


int main(){
    string n;
    set<string> se;
    while(cin >> n){
        n = 
        n.fre++;
    }
    int max_fre = INT_MAX;
    for(auto x : se){
        if(x.fre > max_fre){
            cout << x.data;
        }
    }
}