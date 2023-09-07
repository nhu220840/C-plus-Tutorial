#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    // for(int i = 0; i < n; i++){
    //     if(i + k <= n)
    //         cout << *min_element(a + i, a + i + k) << " " << *max_element(a + i, a + i + k) << endl;
    // }

    int max_ele = INT_MIN;
    for(int i = 0; i < k; i++){
        max_ele = max(max_ele, a[i]);
    }
    cout << max_ele << " ";
    for(int i = 1; i < n - k; i++){
        if(a[i + k] > max_ele){
            max_ele = a[i + k];
            cout << max_ele << " ";
        }
        else{
            cout << max_ele << " ";
        }
    }
}