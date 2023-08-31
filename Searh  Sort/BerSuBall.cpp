#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    sort(a, a + n);
    sort(b, b + m);
    int i = 0, j = 0;
    int cnt = 0;
    while(i < n && j < m){
        if(abs(a[i] - b[j]) <= 1){
            cnt++;
            i++;
            j++;
        }
        else if(a[i] < b[j])
            i++;
        else
            j++;
    }
    cout << cnt;
}