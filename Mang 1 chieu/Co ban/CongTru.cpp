#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n], b[n - 1];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n - 1; i++){
        cin >> b[i];
    }
    long long res = a[0];
    for(int i = 0; i < n - 1; i++){
        if(b[i] == 1){
            res += a[i + 1];
        }
        else
            res -= a[i + 1];
    }
    cout << res;
}