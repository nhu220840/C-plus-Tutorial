#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x; cin >> n >> x;

                //Su dung map
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cnt = 0;
    long long sum = 0;
    map<long long, int> mp;
    for(int i = 0; i < n; i++){
        sum += a[i];
        if(sum == x){
            cnt++;
        }
        if(mp.find(sum - x) != mp.end()){
            cnt++;
        }
        mp[sum]++;
    }

                //Su dung two pointer (chua xong)
    // int l = 0;
    // for(int r = 0; r < n; r++){
    //     sum += a[r];
    //     if(sum == x){
    //         cnt++;
    //         sum -= a[l];
    //         l++;
    //     }
    // }

                //Su dung prefix sum
    // int a[n + 1];
    // for(int i = 1; i <= n; i++) cin >> a[i];
    // for(int i = 1; i <= n; i++){
    //     if(i == 0) pre[i] = a[i];
    //     else pre[i] = pre[i - 1] + a[i];
    // }
    // int ans = 0;
    // for(int i = 0; i <= n; i++){
    //     if(binary_search(pre + i + 1, pre + n + 1, pre[i] + x)){
    //         ++ans;
    //     }
    // }
    // cout << ans << endl;


    cout << cnt << endl;
}
