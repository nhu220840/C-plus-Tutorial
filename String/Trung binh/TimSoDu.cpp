#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// 1 tuan hoan voi chu ki 1 (tan cung luon = 1)
// 2 tuan hoan voi chu ki 4 (tan cung la 2, 4, 6, 8)
// 3 tuan hoan voi chu ki 4 (tan cung la 1, 3, 7, 9)
// 4 tuan hoan voi chu ki 2 (tan cung la 4, 6)

// tuan hoan chung la bcnn cua 4 so 
// => phep tinh tuan hoan 4 (chi can tinh so du cua n % 4)

ll remainder(string s, int m){
    ll r = 0;
    for(int i = 0; i < s.length(); i++){
        r = r * 10 + (s[i] - '0');
        r %= m;
    }
    return r;
}

int main(){
    string n; cin >> n;
    int lastNumber = remainder(n, 4);
    if(lastNumber == 0) cout << (1 + 1 + 1 + 1) % 5;
    if(lastNumber == 1) cout << (1 + 2 + 3 + 4) % 5;
    if(lastNumber == 2) cout << (1 + 4 + 9 + 16) % 5;
    if(lastNumber == 3) cout << (1 + 8 + 27 + 64) % 5;
}