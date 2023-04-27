#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    int cnt = 1;
    for(int i = 1; i < n; i++){
        if(a[i] != a[i - 1])
            cnt++;
    }
    cout << cnt;
}