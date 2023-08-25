#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x; cin >> n >> x;
    int a[n];
    for(int &x : a) cin >> x;
    auto it = lower_bound(a, a + n, x);
    if(*it == x)
        cout << it - a;
    else
        cout << -1;
}