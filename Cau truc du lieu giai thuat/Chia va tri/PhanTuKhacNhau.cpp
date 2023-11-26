#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int find(int a[], int b[], int l, int r){
    if(l > r) return -1;
    int mid = (l + r) / 2;
    if(a[mid] != b[mid]){
        int tmp = find(a, b, l, mid - 1);
        if(tmp == -1) return mid;
        else return tmp;
    }
    return find(a, b, mid + 1, r);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n + 1], b[n];
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n - 1; i++) cin >> b[i];
    cout << find(a, b, 1, n - 1);
}