#include <bits/stdc++.h>

using namespace std;

int n, a[100], ok;

void ktao(){
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }
}

void sinh(){
    int i = n - 1; //Xet tu chi so truoc chi so cuoi cung
    //Boi vi neu xet chi so cuoi cung se ko co phan tu nao dung sau de so sanh
    while(i >= 1 && a[i] > a[i + 1]){
        i--;
    }
    if(i == 0){
        ok = 0; //day la cau hinh cuoi cung
    }
    else{
        //Di tim phan tu nho nhat > a[i] trong doan tu [i + 1, n]
        int j = n;
        while(a[i] > a[j]){ 
            j--;
        }
        swap(a[i], a[j]);
        //lat lai doan [i + 1, n]
        int l = i + 1, r = n;
        while(l < r){
            swap(a[l], a[r]);
            l++; r--;
        }
        // reverse(a + i + 1, a + n + 1);
    }
}

int main(){
    cin >> n;
    ktao();
    ok = 1;
    while(ok){
        for(int i = 1; i <= n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
}