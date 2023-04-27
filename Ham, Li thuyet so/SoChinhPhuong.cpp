#include <bits/stdc++.h>

using namespace std;

bool cp(long long n){
    long long x = sqrt(n);
    if(x * x == n)
        return true;
    else
        return false;
}

int main(){
    long long n; cin >> n;
    if(cp(n))
        cout << "YES";
    else
        cout << "NO";
}