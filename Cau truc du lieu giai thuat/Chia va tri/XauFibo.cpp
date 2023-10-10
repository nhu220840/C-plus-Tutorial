#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//xau F[n] = F[n - 2] + F[n - 1]

ll F[100];

char Find(int n, ll k){
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= F[n - 2]){ //neu so k nam trong xau F[n - 2] thi tim kiem tiep o trong xau F[n - 2]
        return Find(n - 2, k);
    }
    else{ //neu so k nam trong xau F[n - 1] thi tim kiem trong khoang F[n - 1], 
    //nhung phai tru di so ki tu cua xau truoc roi moi tinh tiep de tim k
        return Find(n - 1, k - F[n - 2]);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    F[1] = 1;
    F[2] = 1;
    for(int i = 3; i <= 92; i++){
        F[i] = F[i - 1] + F[i - 2];
    }
    ll n, k; cin >> n >> k;
    cout << Find(n, k);
}