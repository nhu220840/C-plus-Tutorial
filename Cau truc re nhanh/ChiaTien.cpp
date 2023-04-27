#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a, b, c, n; 
    cin >> a >> b >> c >> n;
    long long tong = a + b + c + n;
    if(tong % 3 != 0){
        cout << "NO" << endl;
    }
    else{
        long long tb = tong / 3;
        if(tb >= a && tb >= b && tb >= c)
            cout << "YES" << endl;
        else        
            cout << "NO" << endl;
    }
}