#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[100], final = 0;

bool checkSuccessiveNumber(int a[], int n){
    for(int i = 2; i <= n; i++){
        if(abs(a[i] - a[i - 1]) == 1)
            return false;
    }
    return true;
}

void initialize(){
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }
}

void nextGen(){
    int i = n - 1;
    while(i >= 1 && a[i] > a[i + 1]){
        i--;
    }
    if(i == 0)
        final = 1;
    else{
        int j = n;
        while(a[i] > a[j]){
            j--;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    initialize();
    while(!final){
        if(checkSuccessiveNumber(a, n)){
            for(int i = 1; i <= n; i++) cout << a[i];
            cout << endl;
        }
        nextGen();
    }
}