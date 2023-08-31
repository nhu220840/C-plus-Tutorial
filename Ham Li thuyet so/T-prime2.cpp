#include <bits/stdc++.h>

using namespace std;

int nt(long long n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) 
            return 0;
    }
    return n > 1;
}

int main(){
    long long n; cin >> n;
    long long cnt = 0;
    for(int i = 0; i <= sqrt(n); i++){
        if(nt(i))
            cnt++;
    }
    cout << cnt;
}