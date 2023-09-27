#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[1000001], final = 0;

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
    if(i == 0){
        final = 1;
    }
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
    string res = "";
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        res += to_string(x);
    }

    int cnt = 1;
    string tmp = "";
    while(final == 0){
        for(int i = 1; i <= n; i++){
            tmp += to_string(a[i]);
        }
        if(res == tmp){
            cout << cnt;
            return 0;
        }
        else{
            cnt++;
            tmp = "";
            nextGen();
        }
    }
    return 0;
}