#include <bits/stdc++.h>

using namespace std;
using ll = long long;

char c;
int n, final = 0;
char a[10000];

void initialize(){
    for(int i = 1; i <= n; i++){
        a[i] = 'A';
    }
}

void nextGen(){
    int i = n;
    while(i >= 1 && a[i] == c){
        i--;
    }
    if(i == 0)
        final = 1;
    else{
        a[i]++;
        for(int j = i + 1; j <= n; j++){
            a[j] = 'A';
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> c >> n;
    initialize();
    while(!final){
        for(int i = 1; i <= n; i++){
            cout << a[i];
        }
        cout << endl;
        nextGen();
    }
}