#include <bits/stdc++.h>

using namespace std;

int cnt(int n){
    if(n == 1)
        return 0;
    else{
        int res1 = INT_MAX, res2 = INT_MAX, res3 = INT_MAX;
        if(n % 3 == 0)
            res1 = 1 + cnt(n / 3);
        if(n % 2 == 0)
            res2 = 1 + cnt(n / 2);
        if(n > 1)
            res3 = 1 + cnt(n - 1);
        return min({res1, res2, res3});
    }
}

int main(){
    int n; cin >> n;
    cout << cnt(n);
}