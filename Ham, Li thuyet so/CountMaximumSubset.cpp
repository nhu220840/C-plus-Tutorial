#include <bits/stdc++.h>

using namespace std;

int countMaximumSubset(int a[], int n, int target){
    int left = 0; 
    int right = 0;
    int ans = INT_MIN; 

    while(right < n){
        while(left < right && a[right] - a[left] > target){
            left++;
        }
        ans = max(ans, right - left + 1);
        right++;
    }
    return ans;
}

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    cout << countMaximumSubset(a, n, k);
}
