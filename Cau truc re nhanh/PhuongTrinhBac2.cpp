#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    double delta = b*b - 4*a*c;
    if(a != 0){
        if(delta > 0){
            double x1 = (double)(-b - sqrt(delta)) / (2*a);
            double x2 = (double)(-b + sqrt(delta)) / (2*a);
            cout << fixed << setprecision(2) << x1 << " " << fixed << setprecision(2) << x2;
        }
        else if(delta == 0)
            cout << fixed << setprecision(2) << (double)-b/(2*a);
        else
            cout << "VO NGHIEM";
    }
    if(a == 0){
        if(b == 0 && c != 0)
            cout << "VO NGHIEM";
        else if(b == 0 && c == 0)
            cout << "VO SO NGHIEM";
        else
            cout << fixed << setprecision(2) << (double)-c/b;
    }
}