#include <bits/stdc++.h>

using namespace std;

int n, k, a[100], final = 0;

void ktao(){
    for(int i = 1; i <= k; i++){
        a[i] = i;
    }
}

void sinh(){
    int i = k;
    //Gia tri max o moi chi so i la n - k + i
    while(i >= 1 && a[i] == n - k + i){
        i--;
    }
    if(i == 0){
        final = 1; //day la cau hinh cuoi cung
    }
    else{
        a[i]++; //tang gia tri tai chi so do len
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1; //tat ca nhung chi so o sau chi so i tang lan luot 1 don vi so voi chi so dung truoc
        }
    }
}

int main(){
    cin >> n >> k;
    ktao();
    while(final == 0){
        for(int i = 1; i <= k; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
}