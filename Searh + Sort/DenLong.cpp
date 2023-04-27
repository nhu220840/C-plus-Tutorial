#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, l; cin >> n >> l;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    double dis = max(a[0], l - a[n - 1]);
    for(int i = 1; i < n; i++){
        dis = max(dis, (a[i] - a[i - 1]) / 2.0);
    }
    cout << fixed << setprecision(10) << dis << endl;
}