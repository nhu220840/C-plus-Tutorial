#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a + 1, a + n, greater<int>());
    long long sum = a[0];
    for(int i = 1; i < n; i++){
        if(i <= k)
            sum += a[i];
        else 
            sum -= a[i];
    }
    cout << sum;
}