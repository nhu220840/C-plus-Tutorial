#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x; cin >> n >> x;
    int a[n];
    for(int &x : a) cin >> x;
    auto it = upper_bound(a, a + n, x) - 1;
    if(*it == x)
        cout << it - a;
    else
        cout << -1;
}