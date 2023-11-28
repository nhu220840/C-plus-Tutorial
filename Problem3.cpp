#include <bits/stdc++.h>

using namespace std;

void optimizedBubbleSort(int a[], int n){
    int left = 0, right = n - 1;
    
    while(left < right){
        bool swapped = false;
        for(int i = left; i < right; i++){
            if(a[i] > a[i + 1]){
                swap(a[i], a[i + 1]);
                swapped = true;
            }
        }
        
        if(!swapped) break;
        
        right--;
        
        for(int i = right; i > left; i--){
            if(a[i] < a[i - 1]){
                swap(a[i], a[i - 1]);
                swapped = true;
            }
        }
        
        if(!swapped) break;
        
        left++;
    }
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    optimizedBubbleSort(a, n);
    for(int x : a) cout << x << " ";
}