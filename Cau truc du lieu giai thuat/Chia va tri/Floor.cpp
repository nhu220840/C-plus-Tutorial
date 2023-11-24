#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int find(int a[], int l, int r, int x){
    if(l > r) return -1;
    int mid = (l + r) / 2;
    if(a[mid] <= x){
        int tmp = find(a, mid + 1, r, x);
        if(tmp == -1) return a[mid];
        else return tmp;
    }
    return find(a, l, mid - 1, x);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x; cin >> n >> x;
    int a[n];
    for(int &x : a) cin >> x;
    cout << find(a, 0, n - 1, x);
}