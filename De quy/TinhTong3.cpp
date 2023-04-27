#include <bits/stdc++.h>

using namespace std;

long long S(int n){
    if(n == 1)
        return 1;
    else
        return pow(n, 3) + S(n - 1);
}

int main(){
    int n; cin >> n;
    cout << S(n);
}