#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k; cin >> n >> m >> k;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    
    vector<int> v;
    int i = 0, j = 0;
    while(i < n && j < m){
        if(a[i] < b[j]){
            v.push_back(a[i]);
            i++;
        }
        else{
            v.push_back(b[j]);
            j++;
        }
    }
    while(i < n){
        v.push_back(a[i]);
        i++;
    } 
    while(j < m){
        v.push_back(b[j]);
        j++;
    }
    
    cout << v[k - 1];
}