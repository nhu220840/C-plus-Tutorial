#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a, b; cin >> a >> b;
    long long uc = min({a, b});
    long long gt = 1;
    for(int i = 1; i <= uc; i++){
        gt *= i;
    }
    cout << gt;
}
