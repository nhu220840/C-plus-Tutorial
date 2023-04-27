#include <bits/stdc++.h>

using namespace std;

int main(){
    int w, h; cin >> w >> h;
    double bmi = 1.0 * w / pow(1.0 * h / 100, 2);
    if(bmi >= 40)
        cout << "Extreme obesity" << endl;
    else if(bmi >= 35)
        cout << "Obesity 2" << endl;
    else if(bmi >= 30)
        cout << "Obesity 1" << endl;
    else if(bmi >= 25)
        cout << "Over weight" << endl;
    else if(bmi >= 18.5)
        cout << "Normal" << endl;
    else 
        cout << "Under weight" << endl;
}