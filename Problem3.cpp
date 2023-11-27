#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void bubbleSort(int a[], int n){
    int maximum = a[n - 1], minimum = a[0]; 
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    bubbleSort(a, n);
    for(int x : a) cout << x << " ";
}