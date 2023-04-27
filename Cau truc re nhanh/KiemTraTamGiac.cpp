#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c; cin >> a >> b >> c;
    if(a + b <= c || a + c <= b || b + c <= a)
        cout << "INVALID" << endl;
    else{
        if(a == b && b == c)
            cout << "1" << endl;
        else if(a == b && b != c)
            cout << "2" << endl;
        else if(a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
            cout << "3" << endl;
        else    
            cout << "4" << endl;
    }
}