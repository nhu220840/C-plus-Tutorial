#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, k, a[1001];

void nextGeneration(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        i--;
    }
    if(i == 0){
        for(int i = 1; i <= k; i++){
            cout << i << " ";
        }
    }
    else{
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }
        for(int i = 1; i <= k; i++){
            cout << a[i] << " ";
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    for(int i = 1; i <= k; i++) cin >> a[i];
    nextGeneration();
}