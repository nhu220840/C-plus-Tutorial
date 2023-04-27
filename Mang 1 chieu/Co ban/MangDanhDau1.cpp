#include <bits/stdc++.h>

using namespace std;

int dem[1000001];

int main(){
    int n; cin >> n;
    int a[n];
    int maxi = INT_MIN;
    for(int &x : a){
        cin >> x;
        dem[x] = 1;
        maxi = max(maxi, x);
    }
    int cnt = 0;
    for(int i = 0; i <= maxi; i++){
        if(dem[i] != 0)
            cnt++;
    }
    cout << cnt;
}