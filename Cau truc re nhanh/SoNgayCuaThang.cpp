#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n; cin >> t >> n;
    if(t < 1 || t > 12 || n <= 0)
        cout << "INVALID" << endl;
    else{
        if(t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12)
            cout << "31" << endl;
        else if(t == 2){
            if(n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
                cout << "29" << endl;
            else    
                cout << "28" << endl;
        }
        else    
            cout << "30" << endl;
    }

}