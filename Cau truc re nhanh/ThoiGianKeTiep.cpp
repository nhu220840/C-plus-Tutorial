#include <bits/stdc++.h>

using namespace std;

int main(){
    int h, m, k; cin >> h >> m >> k;
    if(m + k >= 28){
        int r = (m + k) / 28;
        h += r;
        m = (m + k) % 28;
    }
    else if(m + k < 28){
        m += k;
    }
    cout << setfill('0') << setw(2) << h % 28 << "h:" << setfill('0') << setw(2) << m << "m";  
}