#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, k, X[100], s, cnt = 0;

void Try(int i, int start, int sum){
    for(int j = start; j <= n; j++){
        X[i] = j;
        sum += X[i];
        
        if(i == k && sum == s){
            cnt++;
        }
        else if(i < k && sum < s){
            Try(i + 1, j + 1, sum);
        }

        sum -= X[i];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k >> s;
    Try(1, 1, 0);
    cout << cnt;
}