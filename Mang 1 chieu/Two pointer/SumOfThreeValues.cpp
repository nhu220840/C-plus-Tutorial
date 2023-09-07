#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    bool found = false;
    for(int i = 0; i < n; i++){
        int l = i + 1, r = n - 1;
        while(l < r){
            if(a[i] + a[l] + a[r] > k){
                r--;
            }
            else if(a[i] + a[l] + a[r] < k){
                l++;
            }
            else{
                found = true;
                break;
            }
        }
        if(found) break;
    }
    if(found == true) cout << "YES";
    else cout << "NO";
}