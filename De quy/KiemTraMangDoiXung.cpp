#include <bits/stdc++.h>

using namespace std;

int check(int a[], int l, int r){
    if(l >= r)
        return 1;
    else{
        if(a[l] != a[r])
            return 0;
        else
            return check(a, l + 1, r - 1);
    }
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    if(check(a, 0, n - 1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}