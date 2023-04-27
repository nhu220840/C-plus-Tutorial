#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i % 2 != 0)
                cout << char(63 + j + i);
            else
                cout << char(95 + j + i);
        }
        cout << endl;
    }
}