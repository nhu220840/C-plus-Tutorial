#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, k, a[1000001], final = 0;

void initialize(){
    for(int i = 1; i <= k; i++){
        a[i] = i;
    }
}

void nextGeneration(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        i--;
    }
    if(i == 0)
        final = 1;
    else{
        a[i]++;
        for(int j = i + 1; j <= n; j++){
            a[j] = a[j - 1] + 1;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    initialize();
    while(final == 0){
        for(int i = 1; i <= k; i++){
            cout << a[i];
        }
        cout << endl;
        nextGeneration();
    }
}