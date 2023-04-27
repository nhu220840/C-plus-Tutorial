#include <bits/stdc++.h>

using namespace std;

int check(int a[], int n){
    int l = 0, r = n - 1;
    while(l <= r){
        if(a[l] != a[r])
            return 0;
        l++; r--;
    }
    return 1;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    if(check(a, n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}