#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, S, a[100], used[100];
int cnt = 0, ans = INT_MAX;

void enter(){
    cin >> n >> S;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
}

void Try(int i, int start, int sum){
    for(int j = start; j <= n; j++){
        sum += a[j];
        used[j] = 1;
        cnt++;
        
        if(sum == S){
            ans = min(ans, cnt);
        }
        else if(sum < S){
            Try(i + 1, j + 1, sum);
        }

        sum -= a[j];
        used[j] = 0;
        cnt--;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    enter();
    Try(1, 1, 0);
    if(ans == INT_MAX) cout << -1;
    else cout << ans;
}