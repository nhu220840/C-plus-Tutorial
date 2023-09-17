#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int maxn = 1e5 + 5;

int a[maxn], l[maxn], r[maxn], d[maxn];
ll freq[maxn], query[maxn];

int main(){
    int n, m, k; cin >> n >> m >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= m; i++){
        cin >> l[i] >> r[i] >> d[i];
    }
    for(int i = 1; i <= k; i++){
        int x, y; cin >> x >> y;
        freq[x]++;
        freq[y + 1]--;
    }

    for(int i = 1; i <= m; i++){
        freq[i] += freq[i - 1];
    }

    for(int i = 1; i <= m; i++){
        query[l[i]] += freq[i] * d[i];
        query[r[i] + 1] -= freq[i] * d[i];
    }

    for(int i = 1; i <= n; i++){
        query[i] += query[i - 1];
        cout << a[i] + query[i] << " ";
    }
}