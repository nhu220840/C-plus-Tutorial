#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    unordered_map<int, int> mp;
    mp[0] = -1;
    int sum = 0, ans = -1;
    for(int i = 0; i < n; i++){
        sum += a[i];
        int mod = sum % k;
        if(mod < 0) 
            mod += k;
        if(mp.find(mod) != mp.end()) 
            ans = max(ans, i - mp[mod]);
        else 
            mp[mod] = i;
    }
    cout << ans << endl;
}