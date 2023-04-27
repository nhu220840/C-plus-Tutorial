#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int cnt = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << cnt << " ";
            cnt++;
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << i + j + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j <= n - i)
                cout << "~";
            else
                cout << i;
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 1; i <= n; i++){
        int kc = n - 1;
        int pos = i;
        for(int j = 1; j <= i; j++){
            cout << pos << " ";
            pos += kc;
            kc--;
        }
        cout << endl;
    }
}
