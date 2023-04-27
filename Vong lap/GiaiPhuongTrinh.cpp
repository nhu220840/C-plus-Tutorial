#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, n;
    cin >> a >> b >> n;
    int check = 0;
    for(int i = 0; i <= n / b; i++){
        if((n - b * i) % a == 0){
            check = 1;
        }
    }  
    if(check == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
