#include <bits/stdc++.h>

using namespace std;

int n, a[100], final = 0;

void ktao(){
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}

void sinh(){
    int i = n; 
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0){
        final = 1; 
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
            if(a[i] == 1) cout << 'A';
            else cout << 'B';
        }
        cout << endl;
        sinh();
    }
}