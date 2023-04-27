#include <bits/stdc++.h>

using namespace std;

int main(){
    double s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    double tbm = (s1 + s2 + s3 * 2 + s4 * 3) / 7.0;
    if(tbm >= 8)
        cout << "GIOI" << endl;
    else if(tbm < 8 && tbm >= 6.5)
        cout << "KHA" << endl;
    else if(tbm < 6.5 && tbm >= 5)
        cout << "TRUNG BINH" << endl;
    else    
        cout << "YEU" << endl; 
}