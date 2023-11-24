#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//Idea: chia doi mang ra
//Thi khi do maximum subarray = max(nua trai, nua phai, crossingsum)
//Con 1 cach khac su dung Kadane's Algorithm (nhanh hon)

ll crossingSum(int a[], int l, int mid, int r){
    ll sumLeft = 0, maxSumLeft = 0;
    ll sumRight = 0, maxSumRight = 0;
    for(int i = mid; i >= l; i--){
        sumLeft += a[i];
        maxSumLeft = max(maxSumLeft, sumLeft);
    }
    for(int i = mid + 1; i <= r; i++){
        sumRight += a[i];
        maxSumRight = max(maxSumRight, sumRight);
    }
    return maxSumLeft + maxSumRight;
}

ll maximumSubarray(int a[], int l, int r){
    if(l == r) return a[l];
    int mid = (l + r) / 2;
    return max({
        maximumSubarray(a, l, mid),
        maximumSubarray(a, mid + 1, r),
        crossingSum(a, l, mid, r)
    });
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    cout << maximumSubarray(a, 0, n - 1);
}