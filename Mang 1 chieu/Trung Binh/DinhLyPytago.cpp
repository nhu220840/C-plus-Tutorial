#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        a[i] *= a[i];
    }
    sort(a, a + n);
    for(int i = n - 1; i >= 2; i--){
        int l = 0, r = i - 1;
        while(l < r){
            if(a[l] + a[r] == a[i]){
                cout << "YES";
                return 0;
            }
            else if(a[l] + a[r] > a[i])
                r--;
            else
                l++;
        }
    }
    cout << "NO";
    return 0;
}