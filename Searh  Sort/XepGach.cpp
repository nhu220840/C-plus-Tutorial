#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    int stand = a[0]; //stand: suc chiu dung cua vien gach
    int cnt = 1;
    for(int i = 1; i < n; i++){
        if(stand <= 0) break;
        else{
            stand = min(stand - 1, a[i]);
            cnt++;
        }
    }
    cout << cnt;
}