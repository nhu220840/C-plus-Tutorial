#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int cnt = 0;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(__gcd(a[i], a[j]) == 1)
                cnt++;
        }
    }
    cout << cnt;
}