#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    if(n >= 1000)
        cout << 4500 * n + 1200000;
    else if(n >= 800)
        cout << 3900 * n + 900000;
    else if(n >= 500)
        cout << 3700 * n + 800000;
    else
        cout << 3300 * n;
}