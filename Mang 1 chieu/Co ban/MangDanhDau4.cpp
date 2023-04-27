#include <bits/stdc++.h>

using namespace std;

int dem[1000001];

int main(){
    int n; cin >> n;
    int a[n];
    int maxi = INT_MIN;
    for(int &x : a){
        cin >> x;
        dem[x]++;
        maxi = max(maxi, x);
    }
    int max_fre = 0, res;
    for(int i = 0; i <= maxi; i++){
        if(dem[i] > max_fre){
            max_fre = dem[i];
            res = i;
        }
    }
    cout << res << " " << max_fre;
}