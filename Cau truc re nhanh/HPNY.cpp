#include <bits/stdc++.h>

using namespace std;

int main(){
    int h, m; cin >> h >> m;
    if(h == 23){
        cout << 60 - m;
    }
    else{
        cout << (24 - h - 1) * 60 + 60 - m;
    }
}