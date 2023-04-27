#include <bits/stdc++.h>

using namespace std;

int main(){
    int c1, c2, c3, c4, c5;
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    int tong = c1 + c2 + c3 + c4 +c5;
    if(tong % 5 == 0){
        if(tong == 0)
            cout << "-1";
        else
            cout << tong / 5;
    }
    else
        cout << "-1";
}