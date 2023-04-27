#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    double kc1 = 1.0 * b / a;
    double kc2 = 1.0 * c / b;
    double kc3 = 1.0 * d / c;
    if(kc1 == kc2 && kc2 == kc3)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}