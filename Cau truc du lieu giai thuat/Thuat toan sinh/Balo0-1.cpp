#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, S, w[1000], v[1000], a[1000], final = 0;

void nextGen(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0)
        final = 1;
    else{
        a[i] = 1;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> S;
    int ans = 0;
    for(int i = 1; i <= n; i++) cin >> w[i];
    for(int i = 1; i <= n; i++) cin >> v[i];
    while(!final){
        int sum = 0;
        int value = 0;
        for(int i = 1; i <= n; i++){
            if(a[i] == 1){
                sum += w[i];
                value += v[i];
            }
        }
        if(sum <= S) ans = max(ans, value);
        nextGen();
    }
    cout << ans;
}