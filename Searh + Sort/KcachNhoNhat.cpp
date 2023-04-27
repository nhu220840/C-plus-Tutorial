#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    int min_dis = INT_MAX;
    for(int i = 1; i < n; i++){
        min_dis = min(min_dis, a[i] - a[i - 1]);
    }
    cout << min_dis << endl;
}