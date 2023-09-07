#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    int i = 0, j = 0;
    ll cnt = 0;
    while(i < n && j < m){
        if(a[i] > b[j]){
            j++;
        }
        else if(a[i] < b[j]){
            i++;
        }
        else{
            int cnt_i = 1, cnt_j = 1;
            while(i + 1 < n && a[i] == a[i + 1]){
                cnt_i++;
                i++;
            }
            while(j + 1 < m && b[j] == b[j + 1]){
                cnt_j++;
                j++;
            }
            cnt += 1ll * cnt_i * cnt_j;
            i++; j++;
        }
    }
    cout << cnt;
}