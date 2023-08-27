#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x; cin >> n >> x;
    int a[n];
    for(int &x : a) cin >> x;

    auto it1 = lower_bound(a, a + n, x);
    if(it1 == a + n)
        cout << -1 << endl;
    else
        cout << it1 - a << endl;

    auto it2 = upper_bound(a, a + n, x);
    if(it2 == a + n)
        cout << -1 << endl;
    else
        cout << it2 - a << endl;

    auto it3 = lower_bound(a, a + n, x);
    if(*it3 == x)
        cout << it3 - a << endl;
    else
        cout << -1 << endl;

    auto it4 = upper_bound(a, a + n, x) - 1;
    if(*it4 == x){
        cout << it4 - a << endl;
    }
    else
        cout << -1 << endl;

    cout << distance(it3, it4) + 1 << endl;
}