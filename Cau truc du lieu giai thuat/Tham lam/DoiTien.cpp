#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int value[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
int cnt = 0;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;

    for(int i = 0; i < 10; i++){
        int tmp = n / value[i];
        cnt += tmp;
        n = n - tmp * value[i];
    }

    cout << cnt;
}