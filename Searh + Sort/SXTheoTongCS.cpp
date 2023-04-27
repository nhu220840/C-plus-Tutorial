#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll sum_of_numbers(int n){
    ll sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool cmp(int a, int b){
    if(sum_of_numbers(a) == sum_of_numbers(b))
        return a < b;
    else
        return sum_of_numbers(a) < sum_of_numbers(b);
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n, cmp);
    for(int x : a) cout << x << " ";
}