#include <bits/stdc++.h>

using namespace std;

int check(int a[], int n){
    if(n == 1){
        if(a[0] % 2 != 0)
            return 0;
        else
            return 1;
    }
    else{
        if(a[n - 1] % 2 != 0)
            return 0;
        else
            return check(a, n - 1);
    }
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(check(a, n))
        cout << "YES";
    else
        cout << "NO";
}