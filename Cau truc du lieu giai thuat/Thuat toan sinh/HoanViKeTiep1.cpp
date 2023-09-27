#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[1001];

void nextGeneration(){
    int i = n - 1;
    while(i >= 1 && a[i] > a[i + 1]){
        i--;
    }
    if(i == 0){
        for(int i = 1; i <= n; i++){
            cout << i << " ";
        }
    }
    else{
        int j = n;
        while(a[i] > a[j]){
            j--;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
        for(int i = 1; i <= n; i++){
            cout << a[i] << " ";
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    nextGeneration();
}