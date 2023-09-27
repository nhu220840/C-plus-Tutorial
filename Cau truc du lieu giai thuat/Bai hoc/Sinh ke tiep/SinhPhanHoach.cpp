#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[1000001], cnt, final = 0;

void initialize(){
    cnt = 1;
    a[1] = n;
}

void nextGeneration(){
    int i = cnt;
    while(i >= 1 && a[i] == 1){
        i--;
    }
    if(i == 0)
        final = 1;
    else{
        a[i]--;
        int d = cnt - i + 1; //so luong don vi con thieu
        cnt = i;
        //Bieu dien d thong qua a[i]
        int q = d / a[i]; //quotient: thuong
        int r = d % a[i]; //remainder: so du
        for(int j = 1; j <= q; j++){
            cnt++;
            a[cnt] = a[i];
        }
        if(r != 0){
            cnt++;
            a[cnt] = r;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    initialize();
    while(final == 0){
        for(int i = 1; i <= cnt; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        nextGeneration();
    }
}