#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    int min_dis = INT_MAX;
    int cnt = 0;
    for(int i = 1; i < n; i++){
        if(a[i] - a[i - 1] < min_dis){
            min_dis = a[i] - a[i - 1];
            cnt = 1;
        }
        else if(a[i] - a[i - 1] == min_dis){
            cnt++;
        }
    }
    cout << min_dis << " " << cnt;
}