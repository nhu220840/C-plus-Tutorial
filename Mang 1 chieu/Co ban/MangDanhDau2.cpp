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
    for(int i = 0; i <= maxi; i++){
        if(dem[i] != 0)
            cout << i << " " << dem[i] << endl;
    }
}