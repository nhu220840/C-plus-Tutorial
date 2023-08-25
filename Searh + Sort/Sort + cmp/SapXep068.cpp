#include <bits/stdc++.h>

using namespace std;

int count(int n){
    if(n == 0) return 1;
    int cnt = 0;
    while(n){
        int r = n % 10;
        if(r == 0 || r == 6 || r == 8)
            cnt++;
        n /= 10;
    }
    return cnt;
}

bool cmp(int a, int b){
    if(count(a) != count(b))
        return count(a) > count(b);
    return a < b;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n, cmp);
    for(int x : a) cout << x << " "; 
}