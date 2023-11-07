#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    
    int F[1001];
    for(int i = 0; i < n; i++){
        F[i] = 1; 
        for(int j = 0; j < i; j++){
            if(a[i] > a[j]){
                F[i] = max(F[i], F[j] + 1);
            }
        }
    }
    cout << *max_element(F, F + n);
}
