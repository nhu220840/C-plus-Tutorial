#include <bits/stdc++.h>

using namespace std;

long long gt(int n){
    if(n == 1)
        return 1;
    else
        return n * gt(n - 1);
}

int main(){
    int n; cin >> n;
    if(n == 0)
        cout << "1";
    else
        cout << gt(n);
}