#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int find(int a[], int l, int r){
    if(l > r) return -1;
    int mid = (l + r) / 2;
    if(a[mid] == 1){
        int tmp = find(a, l, mid - 1);
        if(tmp == -1) return mid;
        else return tmp;
    }
    return find(a, mid + 1, r);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    cout << find(a, 0, n - 1);
}