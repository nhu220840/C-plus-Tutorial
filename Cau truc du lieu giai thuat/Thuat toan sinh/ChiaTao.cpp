#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[1000], w[1000], final = 0;

void initialize(){
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}

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
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> w[i];
    ll ans = INT_MAX;
    initialize();
    while(!final){
        ll s1 = 0, s2 = 0;
        for(int i = 1; i <= n; i++){
            if(a[i] == 0){
                s1 += w[i];
            }
            else{
                s2 += w[i];
            }
        }
        ans = min(ans, abs(s1 - s2));
        nextGen();
    }
    cout << ans;
}