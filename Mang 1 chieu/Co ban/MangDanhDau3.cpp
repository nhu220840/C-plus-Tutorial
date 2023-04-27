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
    for(int i = 0; i < n; i++){
        if(dem[a[i]] != 0){
            cout << a[i] << " " << dem[a[i]] << endl;
            dem[a[i]] = 0;
        }
    }
}