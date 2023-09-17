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

    multiset<int> ms;
    for(int i = 0; i < k; i++){
        ms.insert(a[i]);
    }

    for(int i = k; i <= n; i++){
        cout << *ms.begin() << " " << *ms.rbegin() << endl;
        ms.erase(ms.lower_bound(a[i - k]));
        ms.insert(a[i]);
    }
}