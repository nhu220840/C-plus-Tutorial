#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i = 0; i < n; i++){
        if(i == 0)
            cout << a[1] - a[0] << " " << a[n - 1] - a[0] << endl;
        else if(i == n - 1)
            cout << a[n - 1] - a[n - 2] << " " << a[n - 1] - a[0] << endl;
        else
            cout << min(a[i] - a[i - 1], a[i + 1] - a[i]) << " " << max(a[i] - a[0], a[n - 1] - a[i]) << endl;
    }   
} 