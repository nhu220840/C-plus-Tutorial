#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    for(int x : a) cout << x << " ";

    //Counting Sort
    
    // int n; cin >> n;
    // int a[n];
    // for(int &x : a) cin >> x;
    // int cnt[3] = {0};
    // for(int x : a) cnt[x]++;
    // for(int i = 0; i < cnt[0]; i++) cout << 0 << " ";
    // for(int i = 0; i < cnt[1]; i++) cout << 1 << " ";
    // for(int i = 0; i < cnt[2]; i++) cout << 2 << " ";
}