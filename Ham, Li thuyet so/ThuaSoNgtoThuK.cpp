#include <bits/stdc++.h>

using namespace std;

void ptich(long long n, long long k){
    long long cnt = 0;
    int check = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                cnt++;
                if(cnt == k){
                    cout << i << endl;
                    check = 1;
                }
                n /= i;
            }
        }
    }
    if(n != 1)
        cnt++;
    if(cnt == k){
        cout << n << endl;
        check = 1;
    }
    if(check == 0)
        cout << "-1";
}

int main(){
    long long n, k; cin >> n >> k;
    ptich(n, k);
}