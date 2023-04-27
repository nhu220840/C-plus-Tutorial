#include <bits/stdc++.h>

using namespace std;

int dem[1000001];

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
        dem[x]++;
    }
    int max_fre = 0, res;
    for(int i = 0; i < n; i++){
        if(dem[a[i]] > max_fre){
            max_fre = dem[a[i]];
            res = a[i];
        }
    }
    cout << res << " " << max_fre;
}