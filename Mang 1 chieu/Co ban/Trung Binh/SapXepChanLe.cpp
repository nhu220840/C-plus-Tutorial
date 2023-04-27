#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b){
    if(a % 2 == 0 && b % 2 == 0)
        return a < b;
    else if(a % 2 != 0 && b % 2 != 0)
        return a > b;
    return a % 2 != 0;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n, cmp);
    for(int x : a) cout << x << " ";
}