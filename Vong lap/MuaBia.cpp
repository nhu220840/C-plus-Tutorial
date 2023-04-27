#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int bia = n / 28;
    int vo = bia;
    while(vo >= 3){
        int kq = vo / 3;
        bia += kq;
        vo = kq + vo % 3;
    }
    cout << bia;
}
