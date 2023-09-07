#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    ll sum = 0, pos = 0;
    for(int i = 0; i < k; i++){
        sum += a[i];
    }
    ll maxSum = sum;
    for(int i = 1; i <= n - k; i++){
        sum = sum + a[i + k - 1] - a[i - 1];
        if(sum > maxSum){
            maxSum = sum;
            pos = i;
        }
    }
    cout << maxSum << endl;
    for(int i = 0; i < k; i++) cout << a[pos + i] << " ";
}