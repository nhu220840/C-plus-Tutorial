#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int partition(int a[], int l, int r){
    int i = l - 1, pivot = a[r];
    for(int j = l; j < r; j++){
        if(a[j] <= pivot){
            i++;
            swap(a[i], a[j]);
        }
    }
    i++;
    swap(a[i], a[r]);
    return i;
}

void quickSort(int a[], int l, int r){
    if(l < r){
        int pos = partition(a, l, r);
        quickSort(a, l, pos - 1);
        quickSort(a, pos + 1, r);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n; 
    int a[n];
    for(int &x : a) cin >> x;
    quickSort(a, 0, n - 1);
    for(int x : a) cout << x << " ";
}