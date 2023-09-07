#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    int l = 0, r = n - 1;
    bool found = false;
    while(l < r){
        if(a[l] + a[r] > k){
            r--;
        }
        else if(a[l] + a[r] < k){
            l++;
        }
        else{
            found = true;
            break;
        }
    }
    if(found == true) cout << "YES";
    else cout << "NO";
}