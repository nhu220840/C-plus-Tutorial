#include <bits/stdc++.h>

using namespace std;

int S(int n){
    if(n == 1)
        return 1;
    else
        return pow(n, 2) + S(n - 1);
}

int main(){
    int n; cin >> n;
    cout << S(n);
}