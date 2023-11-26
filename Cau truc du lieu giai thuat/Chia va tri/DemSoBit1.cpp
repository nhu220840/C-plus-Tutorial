#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//Idea: Tro giang Vinh buoi 9 

int power(ll n){
    int cnt = 0;
    while(n){
        n /= 2;
        cnt++;
    }
    return cnt - 1;
}

ll haiMu[50];
void pow(){
    haiMu[0] = 1;
    for(int i = 1; i <= 40; i++){
        haiMu[i] = haiMu[i - 1] * 2;
    }
}

int find(ll n, int power, int k){
    ll mid = haiMu[power];

    if(k == mid) return n % 2;
    else if(k < mid) return find(n / 2, power - 1, k);
    else return find(n / 2, power - 1, k - mid);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, l, r; cin >> n >> l >> r;
    pow();
    int bac = power(n);
    int cnt = 0;
    for(int i = l; i <= r; i++){
        cnt += find(n, bac, i);
    }
    cout << cnt;
}