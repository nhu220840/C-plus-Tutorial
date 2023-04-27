#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin >> n;
    if(n == 0)
        cout << "0";
    else{
        int cnt = 0;
        while(n){
            int r = n % 10;
            if(r == 2 || r == 3 || r == 5 || r == 7)
                cnt++;
            n /= 10;
        }
        cout << cnt;
    }
}