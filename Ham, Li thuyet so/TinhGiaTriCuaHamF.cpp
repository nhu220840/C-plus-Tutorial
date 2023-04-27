#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin >> n;
    long long chan = 0, le = 0;
    if(n % 2 == 0){
        long long ssh = n / 2;
        chan = (2 + n) * ssh / 2;
        le = (1 + (n - 1)) * ssh / 2;
    }
    else{
        long long ssh_chan = n / 2;
        long long ssh_le = n / 2 + 1;
        chan = (2 + (n - 1)) * ssh_chan / 2;
        le = (1 + n) * ssh_le / 2;
    }
    cout << chan - le;
}