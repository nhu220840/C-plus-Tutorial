#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, k, a[1000001], final = 0;

void initialize(){
    for(int i = 1; i <= n - k; i++){
        a[i] = 0;
    }
    for(int i = n - k + 1; i <= n; i++){
        a[i] = 1;
    }
}

void nextGen1(){
    do{
        for(int i = 1; i <= n; i++){
            cout << a[i];
        }
        cout << " ";
    }while(next_permutation(a + 1, a + n + 1));
}

void nextGen2(){
    do{
        bool check = true;
        int num = 0, cnt = 0;
        for(int i = 1; i <= n; i++){
            if(a[i] == 1){
                cnt++;
            }
            else{
                if(cnt == k) num++;
                cnt = 0;
            }
            if(cnt > k){
                cnt = 0;
                check = false;
                break;
            }
        }
        if(num == 1 && check == true){
            for(int i = 1; i <= n; i++){
                cout << a[i];
            }
            cout << " ";
        }
    }while(next_permutation(a + 1, a + n + 1));
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    initialize();
    nextGen1();
    cout << endl;
    nextGen2();
}