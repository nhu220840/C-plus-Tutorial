#include <bits/stdc++.h>

using namespace std;

void in1(int a[], int n){
    if(n != 0){
        in1(a, n - 1);
        cout << a[n - 1] << " ";
    }
}

void in2(int a[], int n){
    if(n != 0){
        cout << a[n - 1] << " ";
        in2(a, n - 1);
    }
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    in1(a, n);
    cout << endl;
    in2(a, n);
}