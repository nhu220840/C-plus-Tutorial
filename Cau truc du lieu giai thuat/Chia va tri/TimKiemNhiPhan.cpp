#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int binarySearch(int a[], int l, int r, int X){
    if(l > r) return 0;
    int mid = (l + r) / 2;
    
    if(a[mid] == X) return 1;
    else if(a[mid] > X) return binarySearch(a, l, mid - 1, X);
    else return binarySearch(a, mid + 1, r, X);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    cout << (binarySearch(a, 0, n - 1, k) ? "YES" : "NO");
}