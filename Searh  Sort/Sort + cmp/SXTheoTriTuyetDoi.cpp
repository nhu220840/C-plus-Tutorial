#include <bits/stdc++.h>

using namespace std;

bool cmp(int x, int y){
    return abs(x) < abs(y);
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    stable_sort(a, a + n, cmp);
    for(int x : a) cout << x << " ";
}