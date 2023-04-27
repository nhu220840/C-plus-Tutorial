#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    int mini = INT_MAX, cnt = 0;
    for(int &x : a){
        cin >> x;
        if(x < mini)
            mini = x;
    }
    for(int x : a){
        if(x == mini)
            cnt++;
    }
    cout << cnt;
}