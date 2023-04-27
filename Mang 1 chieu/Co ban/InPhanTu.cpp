#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n; 
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    int check = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0 && a[i] % 2 == 0){
            cout << a[i] << " ";
            check = 1;
        }
    }
    if(check == 0)
        cout << "NONE";
}