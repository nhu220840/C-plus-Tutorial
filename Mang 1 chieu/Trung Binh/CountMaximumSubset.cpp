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

// #include <bits/stdc++.h>

// using namespace std;
// using ll = long long;

// int main() {
//     int n, k; cin >> n >> k;
//     int a[n];
//     for(int &x : a) cin >> x;
//     sort(a, a + n);
//     ll ans = 1;
//     for(int i = 0; i < n; i++){
//         //a[i] : a[i] + k
//         //Vi tri cuoi cung cua phan tu <= a[i] + k
//         auto it = upper_bound(a + i + 1, a + n, a[i] + k);
//         it--;
//         ans = max(ans, 1ll * (it - a) - i + 1);
//     }
//     cout << ans << endl;
// }