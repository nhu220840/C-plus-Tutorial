#include <bits/stdc++.h>

using namespace std;

int nt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return n > 1;
}

int tn(int n){
    int rev = 0, tmp = n;
    while(n){
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev == tmp;
}

int cp(int n){
    int x = sqrt(n);
    return x * x == n;
}

int tongcs(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return nt(sum);
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    for(int i = 0; i < n; i++){
        if(nt(a[i]))
            cnt1++;
        if(tn(a[i]))
            cnt2++;
        if(cp(a[i]))
            cnt3++;
        if(tongcs(a[i]))
            cnt4++;
    }
    cout << cnt1 << endl << cnt2 << endl << cnt3 << endl << cnt4;
}