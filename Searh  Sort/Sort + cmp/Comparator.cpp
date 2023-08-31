#include <bits/stdc++.h>

using namespace std;

int count_even(int n){
    int cnt = 0;
    while(n){
        if(n % 2 == 0){
            cnt++;
        }
        n /= 10;
    }
    return cnt;
}

int count_odd(int n){
    int cnt = 0;
    while(n){
        if(n % 2 != 0){
            cnt++;
        }
        n /= 10;
    }
    return cnt;
}

bool cmp(int a, int b){
    if(count_even(a) != count_even(b))
        return count_even(a) < count_even(b);
    else
        return a < b;
}

bool cmp2(int a, int b){
    return count_odd(a) < count_odd(b);
}

int main(){
    int n; cin >> n;
    int a[n], b[n];
    for(int &x : a) cin >> x;
    for(int i = 0; i < n; i++){
        b[i] = a[i];
    }
    sort(a, a + n, cmp);
    for(int x : a) cout << x << " ";
    cout << endl;
    stable_sort(b, b + n, cmp2);
    for(int x : b) cout << x << " ";
}