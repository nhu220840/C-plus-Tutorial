#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int hoare(int a[], int l, int r){
    int pivot = a[l];
    int i = l - 1, j = r + 1;
    while(1){
        //di tim a[i] >= pivot
        do{
            ++i;
        }while(a[i] < pivot);
        do{
            --j;
        }while(a[j] > pivot);

        if(i < j)
            swap(a[i], a[j]);
        else
            return j;
    }
    return -1;
}

void quicksort(int a[], int l, int r){
    if(l < r){
        int p = hoare(a, l, r);
        quicksort(a, l, p);
        quicksort(a, p + 1, r);
    }
}

int main(){
    int a[] = {1, 2, 3, 9, 8, 7, 4, 5, 9, 8, 6};
    quicksort(a, 0, 10);
    for(int x : a){
        cout << x << ' ';
    }
}