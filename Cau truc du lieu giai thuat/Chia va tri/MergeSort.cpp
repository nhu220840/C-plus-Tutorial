#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void merge(int a[], int l, int m, int r){
    vector<int> left(a + l, a + m + 1);
    vector<int> right(a + m + 1, a + r + 1);
    int i = 0, j = 0;
    while(i < left.size() && j < right.size()){
        if(left[i] < right[j]){
            a[l] = left[i];
            i++; l++;
        }
        else{
            a[l] = right[j];
            j++; l++;
        }
    }

    while(i < left.size()){
        a[l] = left[i];
        i++; l++;
    }

    while(j < right.size()){
        a[l] = right[j];
        j++; l++;
    }
}

void mergeSort(int a[], int l, int r){
    if(l >= r) return;
    int m = (l + r) / 2;
    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);
    merge(a, l, m, r); 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    mergeSort(a, 0, n - 1);
    for(int x : a) cout << x << " ";
}