#include <bits/stdc++.h>

using namespace std;

int countPrime(int n){
    if(n < 2) return 0;
    int cnt = 0;
    while(n){
        int r = n % 10;
        if(r == 2 || r == 3 || r == 5 || r == 7)
            cnt++;
        n /= 10;
    }
    return cnt;
}

bool cmp(int a, int b){
    if(countPrime(a) != countPrime(b))
        return countPrime(a) > countPrime(b);
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    stable_sort(a, a + n, cmp);
    for(int x : a) cout << x << " ";
}