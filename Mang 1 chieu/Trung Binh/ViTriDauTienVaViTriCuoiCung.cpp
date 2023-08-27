#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int check = -1, check2 = -1;
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            cout << i + 1 << " ";
            check = 1;
            break;
        }
    }
    for(int i = n - 1; i >= 0; i--){
        if(a[i] == x){
            cout << i + 1 << " ";
            check2 = 1;
            break;
        }
    }
    if(check == -1) cout << -1 << " ";
    if(check2 == -1) cout << -1 << " "; 
}
