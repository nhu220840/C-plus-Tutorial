#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= n - i - 1; j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j < n - i - 1)
                cout << " ";
            else 
                cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j < i)
                cout << " ";
            else 
                cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(i == 0 || j == 0 || i == n - 1 || j == i) 
                cout << "*";
            else 
                cout << " ";
        }
        cout << endl;
    }
}
