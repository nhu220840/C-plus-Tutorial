#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x; cin >> n >> x;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    int check = 0, res;
    for(int i = 0; i < n; i++){
        if(x == a[i]){
            check = 1;
            res = i;
            break;
        }
    }
    if(check == 0)
        cout << "NOT FOUND";
    else{
        for(int i = res; i < n - 1; i++){
            a[i] = a[i + 1];
        }
        n--;
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
    }
}