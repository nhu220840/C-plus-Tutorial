#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    map<int, int> mp;
    int check = -1;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
        if(mp[x] == 2){
            cout << x; 
            check = 1;
            return 0;
        }
    }
    cout << check;
    return 0;
}