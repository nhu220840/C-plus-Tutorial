#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n]; 
    for(int &x : a){
        cin >> x;
    }
    int x; cin >> x;
    int lon = 0, nho = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > x)
            lon++;
        if(a[i] < x)
            nho++;
    }
    cout << nho << endl << lon;
}