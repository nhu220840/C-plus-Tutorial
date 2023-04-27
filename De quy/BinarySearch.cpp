#include <bits/stdc++.h>

using namespace std;

int binarySearch(int a[], int l, int r, int x){
    if(l > r)
        return 0;
    else{
        int m = (l + r) / 2;
        if(a[m] == x)
            return 1;
        else if(a[m] > x)
            return binarySearch(a, m + 1, r, x);
        else
            return binarySearch(a, l, m - 1, x);
    }
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x; cin >> x;
    cout << binarySearch(a, 0, n - 1, x);
}