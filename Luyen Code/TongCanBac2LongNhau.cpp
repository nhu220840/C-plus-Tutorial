#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        double Sn[n];
        Sn[1] = sqrt(2);
        for(int i = 2; i <= n; i++){
            Sn[i] = sqrt(2 + Sn[i - 1]);
        } 
        cout << fixed << setprecision(5) << Sn[n] << endl;
    }
}