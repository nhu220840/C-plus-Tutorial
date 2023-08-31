#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    long long sum = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] > i){
            sum += a[i] - i;
        }
        else break;
    }
    cout << sum;
}