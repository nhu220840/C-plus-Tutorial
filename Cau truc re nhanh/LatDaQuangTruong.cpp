#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, m, a;
    cin >> n >> m >> a;
    long long ngang, doc;
    if(n % a == 0){
        ngang = n / a;
    }
    else{
        ngang = n / a + 1;
    }
    if(m % a == 0){
        doc = m / a;
    }
    else{
        doc = m / a + 1;
    }
    cout << ngang * doc;
}