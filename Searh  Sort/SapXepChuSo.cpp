#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    set<int> se;
    int a[n];
    for(int &x : a){
        cin >> x;
        while(x){
            se.insert(x % 10);
            x /= 10;
        }
    }
    for(int x : se){
        cout << x << " ";
    }
}