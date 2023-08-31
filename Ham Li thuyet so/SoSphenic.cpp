#include <bits/stdc++.h>

using namespace std;

int checkSphenic(long long n){
    int cnt = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            int mu = 0;
            while(n % i == 0){
                mu++;
                cnt++;
                n /= i;
            }
            if(mu > 1)
                return 0;
        }
    }
    if(n != 1)
        cnt++;
    if(cnt == 3)
        return 1;
    else
        return 0;
}

int main(){
    long long n; cin >> n;
    cout << checkSphenic(n);
}