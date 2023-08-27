#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int cnt = 0;
    int even = 0, odd = 0;
    while(cin >> n){
        if(n % 2 == 0)
            even++;
        else
            odd++;
        cnt++;
    }
    if((cnt % 2 == 0 && even > odd) || (cnt % 2 != 0 && odd > even))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}