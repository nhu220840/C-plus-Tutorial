#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n, S; cin >> n >> S;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    for(int i = 0; i < n - 3; i++){
        for(int j = i + 1; j < n - 2; j++){
            int k = j + 1, l = n - 1;
            while(k < l){
                ll sum = a[i] + a[j] + a[k] + a[l];
                if(sum == S){
                    cout << "YES";
                    return 0;
                }
                else if(sum > S) l--;
                else k++;
            }
        }
    }
    cout << "NO";
    return 0;
}