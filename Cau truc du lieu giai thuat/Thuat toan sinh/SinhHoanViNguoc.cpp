#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[1000001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; i++) a[i] = n - i + 1;
    do{
        for(int i = 1; i <= n; i++){
            cout << a[i];
        }
        cout << endl;
    }while(prev_permutation(a + 1, a + n + 1));
}