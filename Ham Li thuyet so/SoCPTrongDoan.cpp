#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    for(int i = ceil(sqrt(a)); i <= sqrt(b); i++){
        cout << 1ll * i * i << " ";
    }
}