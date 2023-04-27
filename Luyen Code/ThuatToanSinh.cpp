#include <bits/stdc++.h>

using namespace std;

int n, a[100], final;

void initial(){
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}

void Generation(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0)
        final = 0;
    else{
        a[i] = 1;
    }
}

bool tn(){
    int l = 1, r = n;
    while(l <= r){
        if(a[l] != a[r])
            return false;
        l++; r--;
    }
    return true;
}

int main(){
    cin >> n;
    initial();
    final = 1;
    while(final){
        if(tn()){
            for(int i = 1; i <= n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
        Generation();
    }
}