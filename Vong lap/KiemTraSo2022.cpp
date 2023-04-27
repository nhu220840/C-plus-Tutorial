#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int check = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x == 2022){
            cout << "YES" << endl;
            check = 1;
        }
    }
    if(check == 1)
        cout << "YES" << endl;
    else    
        cout << "NO" << endl;
}