#include <bits/stdc++.h>

using namespace std;

bool tn(int n){
    int lat = 0, tmp = n;
    while(n){
        lat = lat * 10 + n % 10;
        n /= 10;
    }
    if(tmp == lat)
        return true;
    else
        return false;
}

int usnt(int n){
    int cnt = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            cnt++;
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n != 1) cnt++;
    if(cnt >= 3)
        return 1;
    else
        return 0;
}

int main(){
    int a, b; cin >> a >> b;
    int check = 0;
    for(int i = a; i <= b; i++){
        if(tn(i) && usnt(i)){
            cout << i << " ";
            check = 1;
        }
    }
    if(check == 0)
        cout << "-1";
}