#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, k, a[105], X[105];
int sum_arr = 0, cnt = 0;

void enter(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        sum_arr += a[i];
    }
}

void Try(int i, int start, int sum){
    for(int j = start; j <= n; j++){
        sum += a[j];

        if(sum == sum_arr / k){
            cnt++;
        }
        else if(sum < sum_arr / k){
            Try(i + 1, j + 1, sum);
        }

        sum -= a[j];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    Try(1, 1, 0);
    cout << (cnt == k) ? 1 : 0;
}