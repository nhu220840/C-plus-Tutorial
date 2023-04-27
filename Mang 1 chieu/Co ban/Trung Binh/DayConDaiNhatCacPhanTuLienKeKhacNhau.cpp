#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n + 1];
    for(int &x : a) cin >> x;
    a[n] = a[n - 1]; 
    int cnt = 1, pos = 0;
    int ans = 0;
    ll sum = a[0], ans_sum = a[0];
    for(int i = 1; i <= n; i++){
        if(a[i] != a[i - 1]){
            cnt++;
            sum += a[i];
        }
        else{
            if(cnt > ans){
                ans = cnt;
                ans_sum = sum;
                pos = i - cnt;
            }
            else if(cnt == ans){
                if(sum > ans_sum){
                    ans_sum = sum;
                    pos = i - cnt;
                }
            }
            cnt = 1;
            sum = a[i];
        }
    }
    cout << ans << endl;
    for(int i = 0; i < ans; i++){
        cout << a[pos + i] << " ";
    }
}