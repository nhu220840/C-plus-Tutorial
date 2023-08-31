#include <bits/stdc++.h>

using namespace std;

bool tn(int n){
    int lat = 0, tmp = n;
    while(n){
        lat = lat * 10 + n % 10;
        n /= 10;
    }
    if(lat == tmp)
        return true;
    else
        return false;
}

int check6(int n){
    while(n){
        if(n % 10 == 6)
            return 1;
        n /= 10;
    }
    return 0;
}

int check8(int n){
    long long sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    if(sum % 10 == 8)
        return 1;
    else
        return 0;
}

int main(){
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(tn(i) && check8(i) && check6(i))
            cout << i << " ";
    }
}