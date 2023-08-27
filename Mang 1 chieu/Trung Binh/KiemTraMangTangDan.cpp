#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    int check = 1;
    for(int &x : a) cin >> x;
    for(int i = 1; i < n; i++){
        if(a[i] <= a[i - 1])
            check = 0;
    }
    if(check == 1)  
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}