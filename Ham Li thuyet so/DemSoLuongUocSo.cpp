#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin >> n;
    long long cnt = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            cnt++;
            if(i != n / i)
                cnt++;
        }
    }
    cout << cnt;
}