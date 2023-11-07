#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define pii pair<int, int>

bool cmp(pii a, pii b) {
    if (a.second != b.second)
        return a.second < b.second;
    return a.first < b.first;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, pii>> serve;
    for (int i = 1; i <= n; i++) {
        int order, prep;
        cin >> order >> prep;
        serve.push_back({i, {order, prep + order}});
    }
    sort(serve.begin(), serve.end(), cmp);

    for (auto it : serve) {
        cout << it.first << " " << it.second.second << endl;
    }
}
