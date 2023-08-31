#include <bits/stdc++.h>

using namespace std;

int nt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return n > 1;
}

int lastmax(int n){
    int max = n % 10, tmp = n;
    while(n){
        int r = n % 10;
        if(r > max){
            max = r;
        }
        n /= 10;
    }
    if(max == tmp % 10)
        return 1;
    else
        return 0;
}

int main(){
    int n; cin >> n;
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(lastmax(i) && nt(i)){
            cnt++;
            cout << i << " ";
        }
    }
    cout << endl;
    cout << cnt;
}