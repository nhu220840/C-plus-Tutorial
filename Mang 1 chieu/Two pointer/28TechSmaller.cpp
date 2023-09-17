#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;

    int i = 0, j = 0;
    while(i < n && j < m){
        if(a[i] < b[j]){
            i++;
        }
        else{
            cout << i << " ";
            j++;
        }
    }
    while(j < m){
        cout << n << " ";
        j++;
    }

    // for(int i = 0; i < m; i++){
    //     auto it = lower_bound(a, a + n, b[i]);
    //     cout << it - a << " ";
    // }
}