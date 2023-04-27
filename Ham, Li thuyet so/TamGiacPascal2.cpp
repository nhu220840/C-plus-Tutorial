#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll mod_inv(ll i) {
    ll res = 1;
    for (int j = MOD - 2; j > 0; j >>= 1) {
        if (j & 1) {
            res = (res * i) % MOD;
        }
        i = (i * i) % MOD;
    }
    return res;
}

ll tohop2(int n, int k) {
    k = min({k, n - k});
    ll res = 1;
    for (int i = 1; i <= k; i++) {
        res = (res * (n - i + 1)) % MOD;
        res = (res * mod_inv(i)) % MOD;
    }
    return res;
}

void pascal(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << tohop2(i, j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pascal(n);
}
