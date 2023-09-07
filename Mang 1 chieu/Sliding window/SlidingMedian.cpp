#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    int sum = 0;
    int median;
    for(int i = 0; i < k; i++){
        sum += a[i];
    }
    cout << sum / k << " ";
}