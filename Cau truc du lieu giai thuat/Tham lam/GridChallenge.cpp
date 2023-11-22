#include <bits/stdc++.h>

using namespace std;
using ll = long long;

char a[105][105];

bool checkColumn(char a[105][105], int n){
    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            if(a[j][i] < a[j - 1][i]) 
                return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++) 
                cin >> a[i][j];

        for(int i = 0; i < n; i++){
            sort(a[i], a[i] + n);
        }
        
        if(checkColumn(a, n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}