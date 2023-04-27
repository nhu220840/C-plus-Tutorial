#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    long long s1 = a / b * b;
    long long s2 = (a + b - 1) / b * b;
    cout << s1 << endl << s2;
}