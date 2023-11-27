#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
ll MOD = 1e9 + 7;

bool recursion(ll num, ll a, ll b)
{
    ll x = (ll)(pow(a, 3) + pow(b, 3));
    if (num == x)
        return true;
    if (num < x)
        return false;
    return recursion(num, ++a, ++b);
}

int main()
{
    int n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (!recursion(a[i], 0, 1))
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}