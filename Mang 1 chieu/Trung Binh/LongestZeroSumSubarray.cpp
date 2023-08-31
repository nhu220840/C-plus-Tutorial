#include <bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;
    int a[n];
    long long sum[n] = {};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum[i] = a[i];
        if (i != 0) {
            sum[i] += sum[i - 1];
        }
    }
    map<long long, int> mp;
    int maxlen = -1, post = 0;
    for (int i = 0; i < n; i++) {
        if (sum[i] == 0){
            maxlen = max(maxlen, i + 1);
            post = 0;
        }
            
        if (mp.find(sum[i]) != mp.end()) {
            if (maxlen < i - mp[sum[i]]) {
                maxlen = i - mp[sum[i]];
                post = mp[sum[i]] + 1;
            }
        }
        else 
            mp[sum[i]] = i;
    }
    if (maxlen == - 1)
        cout << "NOT FOUND";
    else {
        for (int i = post; i < post + maxlen; i++)
            cout << a[i] << ' ';
    }
    return 0;
}