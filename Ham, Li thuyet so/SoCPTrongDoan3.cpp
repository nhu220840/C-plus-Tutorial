#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a, b; 
    cin >> a >> b;
    long long cantren = ceil(sqrt(a));
    long long canduoi = sqrt(b);
    cout <<  canduoi - cantren + 1;
}