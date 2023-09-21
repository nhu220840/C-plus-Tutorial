#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    // int i = 0, j = 1;
    // while(i < n && j < n) {
    //     if(a[j] - a[i] == x){
    //         cout << 1 << endl;
    //         return 0;
    //     } 
    //     else if(a[j] - a[i] < x){
    //         j++;
    //     }
    //     else{
    //         i++;
    //     }
    // }
    // cout << -1 << endl;
    // return 0;

    for(int i = 0; i < n; i++){
        if(binary_search(a + i + 1, a + n, a[i] + x)){
            cout << 1;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
