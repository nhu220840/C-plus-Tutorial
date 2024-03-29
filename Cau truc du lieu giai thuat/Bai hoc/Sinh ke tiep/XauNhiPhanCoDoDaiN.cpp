#include <bits/stdc++.h>

using namespace std;

//Tu tuong:
//B1: Khoi tao cau hinh dau tien
//B2: while (khi chua phai cau hinh cuoi cung){
//    <in ra cau hinh hien tai>
//    <sinh ra cau hinh tiep theo>
//}

int n, a[100], final = 0;

void ktao(){
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}

void sinh(){
    //Bat dau tu bit cuoi cung, va di tim bit 0 dau tien
    int i = n; 
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0){
        final = 1; //day chinh la cau hinh cuoi cung
    }
    else{
        a[i] = 1;
    }
}

int main(){
    cin >> n;
    ktao();
    while(final == 0){
        for(int i = 1; i <= n; i++){
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
}