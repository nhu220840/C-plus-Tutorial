#include <bits/stdc++.h>

using namespace std;

void ptich1(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            cout << i << " ";
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n != 1)
        cout << n;
}

void ptich2(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            int mu = 0;
            while(n % i == 0){
                mu++;
                n /= i;
            }
            cout << "(" << i << ", " << mu << ") ";
        }
    }
    if(n != 1){
        cout << "(" << n << ", 1)";
    }
}

void ptich3(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                cout << i;
                if(n != 1)
                    cout << " x ";
                n /= i;
            }
        }
    }
    if(n != 1)
        cout << n;
}

int main(){
    int n; cin >> n;
    ptich1(n);
    cout << endl;
    ptich2(n);
    cout << endl;
    ptich3(n);
}