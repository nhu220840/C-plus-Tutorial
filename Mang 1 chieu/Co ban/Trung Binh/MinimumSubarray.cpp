#include <bits/stdc++.h>

using namespace std;

int minSubarray(int a[], int n, int target){
    int sum = 0; //Current sum
    int left = 0; //left ptr
    int right = 0; //right ptr
    int shortest = INT_MAX; //shortest window with sum >= target

    //Variable size sliding window: 2-pointer
    while(right < n){
        sum += a[right]; //Add current element to sum
        if(sum == target){ //Check if currentSum == target
            shortest = min(shortest, right - left + 1); //Update smallest window size
        }
        while(sum >= target){
            sum -= a[left]; 
            left++;
            if(sum == target){
                shortest = min(shortest, right - left + 1); //Update smallest window size
            }
        }
        right++;
    }
    if(shortest == INT_MAX)
        return -1;
    else
        return shortest;
}

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    cout << minSubarray(a, n, k);
}

// #include <bits/stdc++.h>

// using namespace std;
// using ll = long long;

// int main() {
//     int n, k; cin >> n >> k;
//     int a[n];
//     for(int &x : a) cin >> x;
//     ll sum = 0;
//     map<ll, int> mp;
//     int ans = INT_MAX;
//     for(int i = 0; i < n; i++){
//         sum += a[i];
//         if(sum == k) ans = min(ans, i + 1);
//         if(mp.find(sum - k) != mp.end()){
//             ans = min(ans, i - mp[sum - k]);
//         }
//         mp[sum] = i;
//     }
//     if(ans == INT_MAX)
//         cout << -1 << endl;
//     else
//         cout << ans << endl;
// }
