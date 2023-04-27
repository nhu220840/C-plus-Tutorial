#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a, b, c;
    cin >> a >> b >> c;
    long long S = a*(b+c)+b*(a+c);
    cout << S;
}