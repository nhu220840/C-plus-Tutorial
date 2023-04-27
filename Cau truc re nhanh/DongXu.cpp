#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, S;
    cin >> n >> S;
    if(S % n == 0)
        cout << S/n;
    else
        cout << S / n + 1;
}