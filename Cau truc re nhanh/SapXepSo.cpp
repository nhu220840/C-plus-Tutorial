#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c; cin >> a >> b >> c;
    int mini = min({a, b, c});
    int maxi = max({a, b, c});
    cout << mini << " ";
    if(a > mini && a < maxi)
        cout << a << " ";
    else if(b > mini && b < maxi)
        cout << b << " ";
    else if(c > mini && c < maxi)
        cout << c << " ";
    cout << maxi;
}