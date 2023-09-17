#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    int l = 0;
    ll cnt = 0;
    multiset<int> ms;
    for(int r = 0; r < n; r++){
        ms.insert(a[r]);
        while(ms.size() >= 1 && (*ms.rbegin() - *ms.begin()) > k){
            auto it = ms.find(a[l]);
            ms.erase(it);
            l++;
        }
        cnt += r - l + 1;
    }
    cout << cnt;
}