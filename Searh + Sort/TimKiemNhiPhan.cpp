#include <bits/stdc++.h>

using namespace std;

bool binarySearch(int a[], int n, int x){
    int l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == x)
            return true;
        else if(a[m] > x)
            l = m + 1;
        else
            r = m - 1;
    }
    return false;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int q; cin >> q;
    while(q--){
        int x; cin >> x;
        if(binarySearch(a, n, x))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}