#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, k; cin >> n >> x >> k;
    int a[n + 1];
    for(int &x : a){
        cin >> x;
    }
    k--;
    for(int i = n; i > k; i--){
        a[i] = a[i - 1];
    }
    a[k] = x;
    n++;
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}