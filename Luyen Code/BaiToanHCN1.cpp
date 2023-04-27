#include <bits/stdc++.h>

using namespace std;

int main(){
    int x1, y1, x2, y2, x, y;
    cin >> x1 >> y1 >> x2 >> y2 >> x >> y;
    if(x > min(x1, x2) && x < max(x1, x2)){
        if(y > min(y1, y2) && y < max(y1, y2)){
            cout << "YES" << endl;;
        }
        else
            cout << "NO" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}