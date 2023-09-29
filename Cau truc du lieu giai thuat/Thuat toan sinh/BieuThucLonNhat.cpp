#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int num[5], a[100], final = 0;

void initialize(){
    for(int i = 1; i <= 4; i++){
        a[i] = 0;
    }
}

void nextGen(){
    int i = 4;
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
    ll ans = INT_MIN;
    initialize();
    for(int i = 1; i <= 4; i++){
        cin >> num[i];
    }
    while(!final){
        ll sum = num[1];
        for(int i = 2; i <= 4; i++){
            if(a[i] == 1)
                sum += num[i];
            else
                sum -= num[i];
        }
        ans = max(ans, sum);
        nextGen();
    }
    cout << ans;
}