#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    unordered_map<int, int> mp;
    int ans = -1;
    for(int i = 0; i < n; i++){
        if(mp.find(a[i] - k) != mp.end()) 
            ans = max(ans, i - mp[a[i] - k]);
        if(mp.find(a[i] + k) != mp.end()) 
            ans = max(ans, i - mp[a[i] + k]);
        if(mp.find(a[i]) == mp.end()) 
            mp[a[i]] = i;
    }
    cout << ans << endl;
}

// #include <bits/stdc++.h>

// using namespace std;
// using ll = long long;

// int main() {
//     int n, k; cin >> n >> k;
//     int a[n];
//     for(int &x : a) cin >> x;
//     map<int, int> pos;
//     int ans = INT_MIN;
//     for(int i = 0; i < n; i++){
//         //a[i] = a[i] + k, a[i] - k;
//         if(pos.count(a[i] + k)){
//             ans = max(ans, i - pos[a[i] + k]);
//         }
//         if(pos.count(a[i] - k)){
//             ans = max(ans, i - pos[a[i] - k]);
//         }
//         if(pos.count(a[i]) == 0){
//             pos[a[i]] = i;
//         }
//     }
//     if(ans == INT_MIN) cout << -1 << endl;
//     else
//         cout << ans << endl;
// }