#include <bits/stdc++.h>

using namespace std;

int countOdd(int n){
    if(n < 10){
        if(n % 2 == 0) return 0;
        else return 1;
    }
    int cnt = 0;
    while(n){
        int r = n % 10;
        if(r == 1 || r == 3 || r == 5 || r == 7 || r == 9)
            cnt++;
        n /= 10;
    }
    return cnt;
}

bool cmp(int a, int b){
    if(countOdd(a) != countOdd(b))
        return countOdd(a) > countOdd(b);
    return a < b;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n, cmp);
    for(int x : a) cout << x << " "; 
}